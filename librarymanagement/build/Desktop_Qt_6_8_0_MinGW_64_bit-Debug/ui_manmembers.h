/********************************************************************************
** Form generated from reading UI file 'manmembers.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANMEMBERS_H
#define UI_MANMEMBERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manMembers
{
public:
    QWidget *centralwidget;
    QPushButton *addMemberButton;
    QPushButton *deleteMemberButton;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *manMembers)
    {
        if (manMembers->objectName().isEmpty())
            manMembers->setObjectName("manMembers");
        manMembers->resize(800, 600);
        centralwidget = new QWidget(manMembers);
        centralwidget->setObjectName("centralwidget");
        addMemberButton = new QPushButton(centralwidget);
        addMemberButton->setObjectName("addMemberButton");
        addMemberButton->setGeometry(QRect(260, 320, 75, 24));
        deleteMemberButton = new QPushButton(centralwidget);
        deleteMemberButton->setObjectName("deleteMemberButton");
        deleteMemberButton->setGeometry(QRect(530, 320, 75, 24));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem19);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(180, 30, 521, 192));
        manMembers->setCentralWidget(centralwidget);
        menubar = new QMenuBar(manMembers);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        manMembers->setMenuBar(menubar);
        statusbar = new QStatusBar(manMembers);
        statusbar->setObjectName("statusbar");
        manMembers->setStatusBar(statusbar);

        retranslateUi(manMembers);

        QMetaObject::connectSlotsByName(manMembers);
    } // setupUi

    void retranslateUi(QMainWindow *manMembers)
    {
        manMembers->setWindowTitle(QCoreApplication::translate("manMembers", "MainWindow", nullptr));
        addMemberButton->setText(QCoreApplication::translate("manMembers", "Add Book", nullptr));
        deleteMemberButton->setText(QCoreApplication::translate("manMembers", "Delete Book", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("manMembers", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("manMembers", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("manMembers", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("manMembers", "Genre", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("manMembers", "Available", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("manMembers", "001", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("manMembers", "The Great Gatsby", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("manMembers", "F. Scott Fitzgerald", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("manMembers", "Fiction", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("manMembers", "Yes", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("manMembers", "002", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("manMembers", "1984", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("manMembers", "George Orwell", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("manMembers", "Fiction", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("manMembers", "Yes", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(2, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("manMembers", "003", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(2, 1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("manMembers", "Brief Answers to the Big Questions", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(2, 2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("manMembers", "Stephen Hawking", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("manMembers", "Science", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(2, 4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("manMembers", "No", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class manMembers: public Ui_manMembers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANMEMBERS_H
