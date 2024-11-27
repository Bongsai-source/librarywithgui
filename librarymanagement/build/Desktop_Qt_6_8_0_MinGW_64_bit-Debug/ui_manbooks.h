/********************************************************************************
** Form generated from reading UI file 'manbooks.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANBOOKS_H
#define UI_MANBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_manBooks
{
public:
    QPushButton *addBookButton;
    QPushButton *deleteBookButton;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QDialog *manBooks)
    {
        if (manBooks->objectName().isEmpty())
            manBooks->setObjectName("manBooks");
        manBooks->resize(654, 498);
        addBookButton = new QPushButton(manBooks);
        addBookButton->setObjectName("addBookButton");
        addBookButton->setGeometry(QRect(120, 340, 111, 51));
        deleteBookButton = new QPushButton(manBooks);
        deleteBookButton->setObjectName("deleteBookButton");
        deleteBookButton->setGeometry(QRect(420, 340, 101, 51));
        tableWidget = new QTableWidget(manBooks);
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
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
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
        tableWidget->setGeometry(QRect(60, 100, 521, 192));
        tableWidget->setRowCount(3);
        label = new QLabel(manBooks);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 641, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(28);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(manBooks);

        QMetaObject::connectSlotsByName(manBooks);
    } // setupUi

    void retranslateUi(QDialog *manBooks)
    {
        manBooks->setWindowTitle(QCoreApplication::translate("manBooks", "Dialog", nullptr));
        addBookButton->setText(QCoreApplication::translate("manBooks", "Add Book", nullptr));
        deleteBookButton->setText(QCoreApplication::translate("manBooks", "Delete Book", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("manBooks", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("manBooks", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("manBooks", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("manBooks", "Genre", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("manBooks", "Available", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("manBooks", "001", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("manBooks", "The Great Gatsby", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("manBooks", "F. Scott Fitzgerald", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("manBooks", "Fiction", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("manBooks", "Yes", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("manBooks", "002", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("manBooks", "1984", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("manBooks", "George Orwell", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("manBooks", "Fiction", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("manBooks", "Yes", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(2, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("manBooks", "003", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(2, 1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("manBooks", "Brief Answers to the Big Questions", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(2, 2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("manBooks", "Stephen Hawking", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("manBooks", "Science", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(2, 4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("manBooks", "No", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("manBooks", "Book Management", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manBooks: public Ui_manBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANBOOKS_H
