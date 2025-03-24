#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QFileDialog>
#include <QRegularExpressionValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    this->setStyleSheet(
        "QPushButton {"
        "   background-color: #0033A0;"
        "   border: none;"
        "   color: white;"
        "   padding: 10px 20px;"
        "   text-align: center;"
        "   font-size: 14px;"
        "   font-weight: bold;"
        "   border-radius: 5px;"
        "   transition: background-color 0.3s ease;"
        "}"
        "QPushButton:hover {"
        "   background-color: #002080;"
        "}"
        "QPushButton:pressed {"
        "   background-color: #001060;"
        "}"
        "QLineEdit {"
        "   padding: 8px;"
        "   border: 1px solid #808080;"
        "   border-radius: 5px;"
        "   font-size: 14px;"
        "   background-color: white;"
        "   color: #333;"
        "   transition: border-color 0.3s ease;"
        "}"
        "QLineEdit:focus {"
        "   border-color: #0033A0;"
        "}"
        "QTableWidget {"
        "   background-color: white;"
        "   alternate-background-color: #f5f5f5;"
        "   gridline-color: #ddd;"
        "   font-size: 14px;"
        "   border-radius: 5px;"
        "   border: 1px solid #ddd;"
        "}"
        "QTableWidget::item {"
        "   padding: 8px;"
        "}"
        "QTableWidget::item:selected {"
        "   background-color: #0033A0;"
        "   color: white;"
        "}"
        "QHeaderView::section {"
        "   background-color: #0033A0;"
        "   color: white;"
        "   padding: 8px;"
        "   font-size: 14px;"
        "   font-weight: bold;"
        "   border: none;"
        "}"
        "QTabWidget::pane {"
        "   border: 1px solid #ddd;"
        "   border-radius: 5px;"
        "   padding: 10px;"
        "   background-color: white;"
        "}"
        "QTabBar::tab {"
        "   background: #f1f1f1;"
        "   border: 1px solid #ddd;"
        "   border-bottom: none;"
        "   padding: 10px 20px;"
        "   font-size: 14px;"
        "   font-weight: bold;"
        "   border-top-left-radius: 5px;"
        "   border-top-right-radius: 5px;"
        "   color: #333;"
        "   transition: background-color 0.3s ease, color 0.3s ease;"
        "}"
        "QTabBar::tab:selected {"
        "   background: #0033A0;"
        "   color: white;"
        "}"
        "QTabBar::tab:hover {"
        "   background: #002080;"
        "   color: white;"
        "}"
        "QMainWindow {"
        "   background-color: #f5f5f5;"
        "}"
        "QMenuBar {"
        "   background-color: #0033A0;"
        "   color: white;"
        "   font-size: 14px;"
        "   font-weight: bold;"
        "}"
        "QMenuBar::item:selected {"
        "   background-color: #002080;"
        "}"
        "QStatusBar {"
        "   background-color: #0033A0;"
        "   color: white;"
        "   font-size: 12px;"
        "}"
        );



    // Подключение кнопок к слотам
    connect(ui->addTeamButton, &QPushButton::clicked, this, &MainWindow::on_addTeamButton_clicked);
    connect(ui->addPlayerButton, &QPushButton::clicked, this, &MainWindow::on_addPlayerButton_clicked);
    connect(ui->addStadiumButton, &QPushButton::clicked, this, &MainWindow::on_addStadiumButton_clicked);
    connect(ui->addMatchButton, &QPushButton::clicked, this, &MainWindow::on_addMatchButton_clicked);
    connect(ui->query1Button, &QPushButton::clicked, this, &MainWindow::on_query1Button_clicked);
    connect(ui->query2Button, &QPushButton::clicked, this, &MainWindow::on_query2Button_clicked);
    connect(ui->query3Button, &QPushButton::clicked, this, &MainWindow::on_query3Button_clicked);
    connect(ui->saveToFileButton, &QPushButton::clicked, this, &MainWindow::on_saveToFileButton_clicked);
    connect(ui->deleteRowButton, &QPushButton::clicked, this, &MainWindow::on_deleteRowButton_clicked);

    // Валидация для числовых полей
    ui->teamRankingLineEdit->setValidator(new QIntValidator(0, 100, this));
    ui->playerAgeLineEdit->setValidator(new QIntValidator(0, 100, this));
    ui->playerNumberLineEdit->setValidator(new QIntValidator(0, 100, this));
    ui->stadiumCapacityLineEdit->setValidator(new QIntValidator(0, 100000, this));
    ui->stadiumTicketPriceLineEdit->setValidator(new QDoubleValidator(0, 100000, 2, this));
}

MainWindow::~MainWindow() {
    delete ui;
}

// Обновить таблицу
void MainWindow::on_refreshTableButton_clicked() {
    // Очищаем таблицу
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);

    // Выводим сообщение об успешном обновлении
    QMessageBox::information(this, "Успех", "Таблица обновлена!");
}

// Добавить команду
void MainWindow::on_addTeamButton_clicked() {
    Team newTeam;
    newTeam.name = ui->teamNameLineEdit->text();
    newTeam.city = ui->teamCityLineEdit->text();
    newTeam.coachLastName = ui->coachLastNameLineEdit->text();
    newTeam.coachFirstName = ui->coachFirstNameLineEdit->text();
    newTeam.coachMiddleName = ui->coachMiddleNameLineEdit->text();
    newTeam.ranking = ui->teamRankingLineEdit->text().toInt();

    teams.append(newTeam);
    QMessageBox::information(this, "Успех", "Команда добавлена!");
}

// Добавить игрока
void MainWindow::on_addPlayerButton_clicked() {
    Player newPlayer;
    newPlayer.lastName = ui->playerLastNameLineEdit->text();
    newPlayer.firstName = ui->playerFirstNameLineEdit->text();
    newPlayer.middleName = ui->playerMiddleNameLineEdit->text();
    newPlayer.age = ui->playerAgeLineEdit->text().toInt();
    newPlayer.position = ui->playerPositionLineEdit->text();
    newPlayer.number = ui->playerNumberLineEdit->text().toInt();

    QString teamName = ui->teamForPlayerLineEdit->text();
    Team* team = findTeamByName(teamName);
    if (team) {
        team->players.append(newPlayer);
        QMessageBox::information(this, "Успех", "Игрок добавлен в команду!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Команда не найдена!");
    }
}

// Добавить стадион
void MainWindow::on_addStadiumButton_clicked() {
    Stadium newStadium;
    newStadium.name = ui->stadiumNameLineEdit->text();
    newStadium.city = ui->stadiumCityLineEdit->text();
    newStadium.capacity = ui->stadiumCapacityLineEdit->text().toInt();
    newStadium.ticketPrice = ui->stadiumTicketPriceLineEdit->text().toDouble();

    QString teamName = ui->teamForStadiumLineEdit->text();
    Team* team = findTeamByName(teamName);
    if (team) {
        team->stadiums.append(newStadium);
        QMessageBox::information(this, "Успех", "Стадион добавлен для команды!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Команда не найдена!");
    }
}

// Добавить матч
void MainWindow::on_addMatchButton_clicked() {
    Match newMatch;
    newMatch.team1 = ui->matchTeam1LineEdit->text();
    newMatch.team2 = ui->matchTeam2LineEdit->text();
    newMatch.date = ui->matchDateEdit->date();
    newMatch.score = ui->matchScoreLineEdit->text();

    QString teamName = ui->teamForMatchLineEdit->text();
    Team* team = findTeamByName(teamName);
    if (team) {
        team->matches.append(newMatch);
        QMessageBox::information(this, "Успех", "Матч добавлен для команды!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Команда не найдена!");
    }
}

// Даты встреч указанной команды, её противники и счёт
void MainWindow::on_query1Button_clicked() {
    QString teamName = ui->query1TeamLineEdit->text();
    Team* team = findTeamByName(teamName);
    if (!team) {
        QMessageBox::warning(this, "Ошибка", "Команда не найдена!");
        return;
    }

    QList<QStringList> data;
    for (const auto& match : team->matches) {
        QStringList row;
        row << match.date.toString("dd.MM.yyyy") << match.team2 << match.score;
        data.append(row);
    }

    updateTable(data);
}

// Номера и фамилии игроков команд, участвовавших во встрече
void MainWindow::on_query2Button_clicked() {
    QString stadiumName = ui->query2StadiumLineEdit->text();
    QDate date = ui->query2DateEdit->date();

    QList<QStringList> data;
    for (const auto& team : teams) {
        for (const auto& match : team.matches) {
            if (match.date == date) {
                for (const auto& player : team.players) {
                    QStringList row;
                    row << QString::number(player.number) << player.lastName;
                    data.append(row);
                }
            }
        }
    }

    updateTable(data);
}

// Список игроков, забивших большее число голов
void MainWindow::on_query3Button_clicked() {
    QList<QStringList> data;
    int maxGoals = 0;

    // Находим максимальное количество голов
    for (const auto& team : teams) {
        for (const auto& player : team.players) {
            if (player.goalsScored > maxGoals) {
                maxGoals = player.goalsScored;
            }
        }
    }

    // Добавляем игроков с максимальным количеством голов
    for (const auto& team : teams) {
        for (const auto& player : team.players) {
            if (player.goalsScored == maxGoals) {
                QStringList row;
                row << player.lastName << player.firstName << QString::number(player.goalsScored);
                data.append(row);
            }
        }
    }

    updateTable(data);
}




// Сохранить в файл
void MainWindow::on_saveToFileButton_clicked() {
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить таблицу", "", "Текстовые файлы (*.txt)");
    if (fileName.isEmpty()) {
        return;
    }

    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        for (int i = 0; i < ui->tableWidget->rowCount(); ++i) {
            for (int j = 0; j < ui->tableWidget->columnCount(); ++j) {
                stream << ui->tableWidget->item(i, j)->text() << "\t";
            }
            stream << "\n";
        }
        file.close();
        QMessageBox::information(this, "Успех", "Таблица сохранена в файл!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось сохранить файл!");
    }
}

// Удалить выделенную строку
void MainWindow::on_deleteRowButton_clicked() {
    int selectedRow = ui->tableWidget->currentRow();
    if (selectedRow == -1) {
        QMessageBox::warning(this, "Ошибка", "Выберите строку для удаления!");
        return;
    }

    // Удаляем строку из таблицы
    ui->tableWidget->removeRow(selectedRow);
    QMessageBox::information(this, "Успех", "Строка удалена!");
}

// Обновить таблицу
void MainWindow::updateTable(const QList<QStringList>& data) {
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(data.size());
    ui->tableWidget->setColumnCount(data.isEmpty() ? 0 : data[0].size());

    for (int i = 0; i < data.size(); ++i) {
        for (int j = 0; j < data[i].size(); ++j) {
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(data[i][j]));
        }
    }
}

// Найти команду по названию
Team* MainWindow::findTeamByName(const QString& name) {
    for (auto& team : teams) {
        if (team.name == name) {
            return &team;
        }
    }
    return nullptr;
}

// Найти стадион по названию
Stadium* MainWindow::findStadiumByName(const QString& name) {
    for (auto& team : teams) {
        for (auto& stadium : team.stadiums) {
            if (stadium.name == name) {
                return &stadium;
            }
        }
    }
    return nullptr;
}
