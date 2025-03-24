#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QDate>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


// Класс Игрок
class Player {
public:
    QString lastName;
    QString firstName;
    QString middleName;
    int age;
    QString position;
    int number;
    int goalsScored = 0; // Количество забитых голов
};

// Класс Стадион
class Stadium {
public:
    QString name;
    QString city;
    int capacity;
    double ticketPrice;
};

// Класс Матч
class Match {
public:
    QString team1;
    QString team2;
    QDate date;
    QString score;
};

// Класс Команда
class Team {
public:
    QString name;
    QString city;
    QString coachLastName;
    QString coachFirstName;
    QString coachMiddleName;
    int ranking;
    QList<Player> players;
    QList<Match> matches;
    QList<Stadium> stadiums;
};

// Основной класс MainWindow
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addTeamButton_clicked(); // Добавить команду
    void on_addPlayerButton_clicked(); // Добавить игрока
    void on_addStadiumButton_clicked(); // Добавить стадион
    void on_addMatchButton_clicked(); // Добавить матч
    void on_query1Button_clicked(); // Запрос 1
    void on_query2Button_clicked(); // Запрос 2
    void on_query3Button_clicked(); // Запрос 3
    void on_saveToFileButton_clicked(); // Сохранить в файл
    void on_deleteRowButton_clicked(); // Удалить выделенную строку
    void on_refreshTableButton_clicked(); // Обновить таблицу

private:
    Ui::MainWindow *ui;
    QList<Team> teams; // Список всех команд

    void updateTable(const QList<QStringList>& data); // Обновить таблицу
    Team* findTeamByName(const QString& name); // Найти команду по названию
    Stadium* findStadiumByName(const QString& name); // Найти стадион по названию
};

#endif // MAINWINDOW_H
