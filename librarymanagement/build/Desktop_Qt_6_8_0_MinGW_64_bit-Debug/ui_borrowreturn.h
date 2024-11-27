/********************************************************************************
** Form generated from reading UI file 'borrowreturn.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWRETURN_H
#define UI_BORROWRETURN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_borrowReturn
{
public:
    QPushButton *borrowButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;

    void setupUi(QDialog *borrowReturn)
    {
        if (borrowReturn->objectName().isEmpty())
            borrowReturn->setObjectName("borrowReturn");
        borrowReturn->resize(758, 486);
        borrowButton = new QPushButton(borrowReturn);
        borrowButton->setObjectName("borrowButton");
        borrowButton->setGeometry(QRect(230, 330, 101, 51));
        pushButton_2 = new QPushButton(borrowReturn);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(460, 330, 101, 51));
        tableWidget = new QTableWidget(borrowReturn);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem19);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(190, 40, 411, 241));
        tableWidget->setRowCount(4);

        retranslateUi(borrowReturn);

        QMetaObject::connectSlotsByName(borrowReturn);
    } // setupUi

    void retranslateUi(QDialog *borrowReturn)
    {
        borrowReturn->setWindowTitle(QCoreApplication::translate("borrowReturn", "Dialog", nullptr));
        borrowButton->setText(QCoreApplication::translate("borrowReturn", "Borrow Book", nullptr));
        pushButton_2->setText(QCoreApplication::translate("borrowReturn", "Return Book", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("borrowReturn", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("borrowReturn", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("borrowReturn", "Borrowed On", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("borrowReturn", "Borrowed By", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("borrowReturn", "001", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("borrowReturn", "The Great Gatsby", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("borrowReturn", "N/A", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("borrowReturn", "N/A", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("borrowReturn", "002", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(1, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("borrowReturn", "1984", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("borrowReturn", "N/A", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("borrowReturn", "N/A", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(2, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("borrowReturn", "003", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(2, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("borrowReturn", "Brief Answers to the Big Questions", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(2, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("borrowReturn", "11/20/2024", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(2, 3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("borrowReturn", "Bob", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(3, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("borrowReturn", "004", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(3, 1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("borrowReturn", "Alexander Hamilton", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(3, 2);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("borrowReturn", "N/A", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(3, 3);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("borrowReturn", "N/A", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class borrowReturn: public Ui_borrowReturn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWRETURN_H
