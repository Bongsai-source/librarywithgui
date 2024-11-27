#include "dashboard.h"
#include "ui_dashboard.h"
#include "manBooks.h"
#include "members.h"
#include "borrowreturn.h"

dashboard::dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dashboard)
{
    ui->setupUi(this);
    QPixmap pix("C:\\Users\\user\\Desktop\\librarymanagement\\librarymanagement\\library.jpg");
    ui->label_2->setPixmap(pix);
}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_manageBooks_clicked()
{
    manBooks booksWindow; // Create an instance of the manBooks window
    booksWindow.setModal(true); // Make it modal (blocks interaction with the previous window)
    booksWindow.exec(); // Show the window
}



void dashboard::on_manageMembers_clicked()
{
    Members membersWindow; // Create an instance of the membersWindow window
    membersWindow.setModal(true); // Make it modal (blocks interaction with the previous window)
    membersWindow.exec(); // Show the window
}


void dashboard::on_pushButton_3_clicked()
{
    borrowReturn brWindow; // Create an instance of the brWindow window
    brWindow.setModal(true); // Make it modal (blocks interaction with the previous window)
    brWindow.exec(); // Show the window
}

