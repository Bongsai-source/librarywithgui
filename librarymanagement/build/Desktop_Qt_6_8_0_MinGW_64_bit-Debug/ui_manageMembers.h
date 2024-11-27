/********************************************************************************
** Form generated from reading UI file 'manageMembers.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMEMBERS_H
#define UI_MANAGEMEMBERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_manageMembers
{
public:
    QPushButton *addMembersButton;
    QPushButton *deleteMembersButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *manageMembers)
    {
        if (manageMembers->objectName().isEmpty())
            manageMembers->setObjectName("manageMembers");
        manageMembers->resize(654, 498);
        addMembersButton = new QPushButton(manageMembers);
        addMembersButton->setObjectName("addMembersButton");
        addMembersButton->setGeometry(QRect(100, 340, 75, 24));
        deleteMembersButton = new QPushButton(manageMembers);
        deleteMembersButton->setObjectName("deleteMembersButton");
        deleteMembersButton->setGeometry(QRect(370, 340, 75, 24));
        tableWidget = new QTableWidget(manageMembers);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem11);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 50, 521, 192));

        retranslateUi(manageMembers);

        QMetaObject::connectSlotsByName(manageMembers);
    } // setupUi

    void retranslateUi(QDialog *manageMembers)
    {
        manageMembers->setWindowTitle(QCoreApplication::translate("manageMembers", "Dialog", nullptr));
        addMembersButton->setText(QCoreApplication::translate("manageMembers", "Add Book", nullptr));
        deleteMembersButton->setText(QCoreApplication::translate("manageMembers", "Delete Book", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("manageMembers", "Member ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("manageMembers", "Member Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("manageMembers", "Is Borrowing", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("manageMembers", "001", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("manageMembers", "Colin", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("manageMembers", "No", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("manageMembers", "002", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("manageMembers", "Bob", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("manageMembers", "No", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(2, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("manageMembers", "003", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(2, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("manageMembers", "Luke", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(2, 2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("manageMembers", "No", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class manageMembers: public Ui_manageMembers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMEMBERS_H
