/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabAddTeam;
    QLineEdit *teamNameLineEdit;
    QLineEdit *teamCityLineEdit;
    QLineEdit *coachLastNameLineEdit;
    QLineEdit *coachFirstNameLineEdit;
    QLineEdit *coachMiddleNameLineEdit;
    QLineEdit *teamRankingLineEdit;
    QPushButton *addTeamButton;
    QWidget *tabAddPlayer;
    QLineEdit *playerLastNameLineEdit;
    QLineEdit *playerFirstNameLineEdit;
    QLineEdit *playerMiddleNameLineEdit;
    QLineEdit *playerAgeLineEdit;
    QLineEdit *playerPositionLineEdit;
    QLineEdit *playerNumberLineEdit;
    QLineEdit *teamForPlayerLineEdit;
    QPushButton *addPlayerButton;
    QWidget *tabAddStadium;
    QLineEdit *stadiumNameLineEdit;
    QLineEdit *stadiumCityLineEdit;
    QLineEdit *stadiumCapacityLineEdit;
    QLineEdit *stadiumTicketPriceLineEdit;
    QLineEdit *teamForStadiumLineEdit;
    QPushButton *addStadiumButton;
    QWidget *tabAddMatch;
    QLineEdit *matchTeam1LineEdit;
    QLineEdit *matchTeam2LineEdit;
    QDateEdit *matchDateEdit;
    QLineEdit *matchScoreLineEdit;
    QLineEdit *teamForMatchLineEdit;
    QPushButton *addMatchButton;
    QWidget *tabQueries;
    QLineEdit *query1TeamLineEdit;
    QPushButton *query1Button;
    QLineEdit *query2StadiumLineEdit;
    QDateEdit *query2DateEdit;
    QPushButton *query2Button;
    QPushButton *query3Button;
    QWidget *tabTable;
    QTableWidget *tableWidget;
    QPushButton *refreshTableButton;
    QPushButton *deleteRowButton;
    QPushButton *saveToFileButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(894, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 871, 561));
        tabAddTeam = new QWidget();
        tabAddTeam->setObjectName("tabAddTeam");
        teamNameLineEdit = new QLineEdit(tabAddTeam);
        teamNameLineEdit->setObjectName("teamNameLineEdit");
        teamNameLineEdit->setGeometry(QRect(40, 40, 281, 41));
        teamCityLineEdit = new QLineEdit(tabAddTeam);
        teamCityLineEdit->setObjectName("teamCityLineEdit");
        teamCityLineEdit->setGeometry(QRect(40, 90, 281, 41));
        coachLastNameLineEdit = new QLineEdit(tabAddTeam);
        coachLastNameLineEdit->setObjectName("coachLastNameLineEdit");
        coachLastNameLineEdit->setGeometry(QRect(40, 140, 281, 41));
        coachFirstNameLineEdit = new QLineEdit(tabAddTeam);
        coachFirstNameLineEdit->setObjectName("coachFirstNameLineEdit");
        coachFirstNameLineEdit->setGeometry(QRect(40, 190, 281, 41));
        coachMiddleNameLineEdit = new QLineEdit(tabAddTeam);
        coachMiddleNameLineEdit->setObjectName("coachMiddleNameLineEdit");
        coachMiddleNameLineEdit->setGeometry(QRect(40, 240, 281, 41));
        teamRankingLineEdit = new QLineEdit(tabAddTeam);
        teamRankingLineEdit->setObjectName("teamRankingLineEdit");
        teamRankingLineEdit->setGeometry(QRect(40, 290, 281, 41));
        addTeamButton = new QPushButton(tabAddTeam);
        addTeamButton->setObjectName("addTeamButton");
        addTeamButton->setGeometry(QRect(40, 340, 231, 51));
        tabWidget->addTab(tabAddTeam, QString());
        tabAddPlayer = new QWidget();
        tabAddPlayer->setObjectName("tabAddPlayer");
        playerLastNameLineEdit = new QLineEdit(tabAddPlayer);
        playerLastNameLineEdit->setObjectName("playerLastNameLineEdit");
        playerLastNameLineEdit->setGeometry(QRect(40, 30, 281, 41));
        playerFirstNameLineEdit = new QLineEdit(tabAddPlayer);
        playerFirstNameLineEdit->setObjectName("playerFirstNameLineEdit");
        playerFirstNameLineEdit->setGeometry(QRect(40, 90, 281, 41));
        playerMiddleNameLineEdit = new QLineEdit(tabAddPlayer);
        playerMiddleNameLineEdit->setObjectName("playerMiddleNameLineEdit");
        playerMiddleNameLineEdit->setGeometry(QRect(40, 140, 281, 41));
        playerAgeLineEdit = new QLineEdit(tabAddPlayer);
        playerAgeLineEdit->setObjectName("playerAgeLineEdit");
        playerAgeLineEdit->setGeometry(QRect(40, 190, 281, 41));
        playerPositionLineEdit = new QLineEdit(tabAddPlayer);
        playerPositionLineEdit->setObjectName("playerPositionLineEdit");
        playerPositionLineEdit->setGeometry(QRect(40, 240, 281, 41));
        playerNumberLineEdit = new QLineEdit(tabAddPlayer);
        playerNumberLineEdit->setObjectName("playerNumberLineEdit");
        playerNumberLineEdit->setGeometry(QRect(40, 290, 281, 41));
        teamForPlayerLineEdit = new QLineEdit(tabAddPlayer);
        teamForPlayerLineEdit->setObjectName("teamForPlayerLineEdit");
        teamForPlayerLineEdit->setGeometry(QRect(40, 340, 281, 41));
        addPlayerButton = new QPushButton(tabAddPlayer);
        addPlayerButton->setObjectName("addPlayerButton");
        addPlayerButton->setGeometry(QRect(40, 390, 251, 61));
        tabWidget->addTab(tabAddPlayer, QString());
        tabAddStadium = new QWidget();
        tabAddStadium->setObjectName("tabAddStadium");
        stadiumNameLineEdit = new QLineEdit(tabAddStadium);
        stadiumNameLineEdit->setObjectName("stadiumNameLineEdit");
        stadiumNameLineEdit->setGeometry(QRect(40, 30, 281, 41));
        stadiumCityLineEdit = new QLineEdit(tabAddStadium);
        stadiumCityLineEdit->setObjectName("stadiumCityLineEdit");
        stadiumCityLineEdit->setGeometry(QRect(40, 90, 281, 41));
        stadiumCapacityLineEdit = new QLineEdit(tabAddStadium);
        stadiumCapacityLineEdit->setObjectName("stadiumCapacityLineEdit");
        stadiumCapacityLineEdit->setGeometry(QRect(40, 140, 281, 41));
        stadiumTicketPriceLineEdit = new QLineEdit(tabAddStadium);
        stadiumTicketPriceLineEdit->setObjectName("stadiumTicketPriceLineEdit");
        stadiumTicketPriceLineEdit->setGeometry(QRect(40, 190, 281, 41));
        teamForStadiumLineEdit = new QLineEdit(tabAddStadium);
        teamForStadiumLineEdit->setObjectName("teamForStadiumLineEdit");
        teamForStadiumLineEdit->setGeometry(QRect(40, 240, 281, 41));
        addStadiumButton = new QPushButton(tabAddStadium);
        addStadiumButton->setObjectName("addStadiumButton");
        addStadiumButton->setGeometry(QRect(40, 290, 201, 61));
        tabWidget->addTab(tabAddStadium, QString());
        tabAddMatch = new QWidget();
        tabAddMatch->setObjectName("tabAddMatch");
        matchTeam1LineEdit = new QLineEdit(tabAddMatch);
        matchTeam1LineEdit->setObjectName("matchTeam1LineEdit");
        matchTeam1LineEdit->setGeometry(QRect(40, 30, 281, 41));
        matchTeam2LineEdit = new QLineEdit(tabAddMatch);
        matchTeam2LineEdit->setObjectName("matchTeam2LineEdit");
        matchTeam2LineEdit->setGeometry(QRect(40, 80, 281, 41));
        matchDateEdit = new QDateEdit(tabAddMatch);
        matchDateEdit->setObjectName("matchDateEdit");
        matchDateEdit->setGeometry(QRect(40, 140, 281, 31));
        matchDateEdit->setCalendarPopup(true);
        matchScoreLineEdit = new QLineEdit(tabAddMatch);
        matchScoreLineEdit->setObjectName("matchScoreLineEdit");
        matchScoreLineEdit->setGeometry(QRect(40, 180, 281, 41));
        teamForMatchLineEdit = new QLineEdit(tabAddMatch);
        teamForMatchLineEdit->setObjectName("teamForMatchLineEdit");
        teamForMatchLineEdit->setGeometry(QRect(40, 230, 281, 41));
        addMatchButton = new QPushButton(tabAddMatch);
        addMatchButton->setObjectName("addMatchButton");
        addMatchButton->setGeometry(QRect(40, 290, 211, 61));
        tabWidget->addTab(tabAddMatch, QString());
        tabQueries = new QWidget();
        tabQueries->setObjectName("tabQueries");
        query1TeamLineEdit = new QLineEdit(tabQueries);
        query1TeamLineEdit->setObjectName("query1TeamLineEdit");
        query1TeamLineEdit->setGeometry(QRect(40, 30, 281, 41));
        query1Button = new QPushButton(tabQueries);
        query1Button->setObjectName("query1Button");
        query1Button->setGeometry(QRect(40, 80, 261, 51));
        query2StadiumLineEdit = new QLineEdit(tabQueries);
        query2StadiumLineEdit->setObjectName("query2StadiumLineEdit");
        query2StadiumLineEdit->setGeometry(QRect(40, 140, 281, 41));
        query2DateEdit = new QDateEdit(tabQueries);
        query2DateEdit->setObjectName("query2DateEdit");
        query2DateEdit->setGeometry(QRect(40, 190, 281, 41));
        query2DateEdit->setCalendarPopup(true);
        query2Button = new QPushButton(tabQueries);
        query2Button->setObjectName("query2Button");
        query2Button->setGeometry(QRect(40, 240, 261, 51));
        query3Button = new QPushButton(tabQueries);
        query3Button->setObjectName("query3Button");
        query3Button->setGeometry(QRect(40, 310, 261, 51));
        tabWidget->addTab(tabQueries, QString());
        tabTable = new QWidget();
        tabTable->setObjectName("tabTable");
        tableWidget = new QTableWidget(tabTable);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 10, 671, 451));
        refreshTableButton = new QPushButton(tabTable);
        refreshTableButton->setObjectName("refreshTableButton");
        refreshTableButton->setGeometry(QRect(690, 10, 141, 41));
        deleteRowButton = new QPushButton(tabTable);
        deleteRowButton->setObjectName("deleteRowButton");
        deleteRowButton->setGeometry(QRect(690, 130, 141, 41));
        saveToFileButton = new QPushButton(tabTable);
        saveToFileButton->setObjectName("saveToFileButton");
        saveToFileButton->setGeometry(QRect(690, 70, 141, 41));
        tabWidget->addTab(tabTable, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 894, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\244\321\203\321\202\320\261\320\276\320\273\321\214\320\275\321\213\320\265 \321\201\320\276\321\200\320\265\320\262\320\275\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        teamNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\260\320\275\320\264\321\213", nullptr));
        teamCityLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        coachLastNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \321\202\321\200\320\265\320\275\320\265\321\200\320\260", nullptr));
        coachFirstNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\202\321\200\320\265\320\275\320\265\321\200\320\260", nullptr));
        coachMiddleNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\321\200\320\265\320\275\320\265\321\200\320\260", nullptr));
        teamRankingLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\202\320\276 \320\262 \321\200\320\265\320\271\321\202\320\270\320\275\320\263\320\265", nullptr));
        addTeamButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\260\320\275\320\264\321\203", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAddTeam), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\260\320\275\320\264\321\203", nullptr));
        playerLastNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        playerFirstNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        playerMiddleNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        playerAgeLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        playerPositionLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\220\320\274\320\277\320\273\321\203\320\260 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        playerNumberLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        teamForPlayerLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\260\320\275\320\264\321\213", nullptr));
        addPlayerButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAddPlayer), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        stadiumNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\321\202\320\260\320\264\320\270\320\276\320\275\320\260", nullptr));
        stadiumCityLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264 \321\201\321\202\320\260\320\264\320\270\320\276\320\275\320\260", nullptr));
        stadiumCapacityLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\274\320\265\321\201\321\202\320\270\320\274\320\276\321\201\321\202\321\214 \321\201\321\202\320\260\320\264\320\270\320\276\320\275\320\260", nullptr));
        stadiumTicketPriceLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260 \320\261\320\270\320\273\320\265\321\202\320\260", nullptr));
        teamForStadiumLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\260\320\275\320\264\321\213", nullptr));
        addStadiumButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\320\260\320\264\320\270\320\276\320\275", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAddStadium), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\320\260\320\264\320\270\320\276\320\275", nullptr));
        matchTeam1LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260 1", nullptr));
        matchTeam2LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\274\320\260\320\275\320\264\320\260 2", nullptr));
        matchScoreLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\265\321\202 \320\274\320\260\321\202\321\207\320\260", nullptr));
        teamForMatchLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\260\320\275\320\264\321\213", nullptr));
        addMatchButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\274\320\260\321\202\321\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAddMatch), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\274\320\260\321\202\321\207", nullptr));
        query1TeamLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\260\320\275\320\264\321\213", nullptr));
        query1Button->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\321\201\321\202\321\200\320\265\321\207\320\270 \320\270 \321\201\321\207\320\265\321\202", nullptr));
        query2StadiumLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\321\202\320\260\320\264\320\270\320\276\320\275\320\260", nullptr));
        query2Button->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\270\320\263\321\200\320\276\320\272\320\260", nullptr));
        query3Button->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\270\320\263\321\200\320\276\320\272\320\276\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabQueries), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
        refreshTableButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        deleteRowButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        saveToFileButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTable), QCoreApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
