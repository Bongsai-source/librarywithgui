/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *manageBooks;
    QPushButton *manageMembers;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(800, 600);
        centralwidget = new QWidget(dashboard);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 641, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(28);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        manageBooks = new QPushButton(centralwidget);
        manageBooks->setObjectName("manageBooks");
        manageBooks->setGeometry(QRect(100, 410, 131, 51));
        manageMembers = new QPushButton(centralwidget);
        manageMembers->setObjectName("manageMembers");
        manageMembers->setGeometry(QRect(350, 410, 131, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(590, 410, 131, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 80, 671, 291));
        label_2->setPixmap(QPixmap(QString::fromUtf8("library.jpg")));
        label_2->setScaledContents(true);
        dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(dashboard);
        statusbar->setObjectName("statusbar");
        dashboard->setStatusBar(statusbar);

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "dashboard", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "Library Management System", nullptr));
        manageBooks->setText(QCoreApplication::translate("dashboard", "Manage books", nullptr));
        manageMembers->setText(QCoreApplication::translate("dashboard", "Manage Members", nullptr));
        pushButton_3->setText(QCoreApplication::translate("dashboard", "Borrow/Returns", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
