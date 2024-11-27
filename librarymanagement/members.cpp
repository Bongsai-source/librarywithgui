#include "members.h"
#include "ui_members.h"

#include <QInputDialog>
#include <QMessageBox>

Members::Members(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Members)
{
    ui->setupUi(this);

    // Connect buttons to slots
    connect(ui->addMembersButton, &QPushButton::clicked, this, &Members::on_addMembersButton_clicked);
    connect(ui->deleteMembersButton, &QPushButton::clicked, this, &Members::on_deleteMembersButton_clicked);
}

Members::~Members()
{
    delete ui;
}

void Members::on_addMembersButton_clicked()
{
    bool ok; // Used to check if the user pressed "OK" or "Cancel"

    // Get member details from user
    QString memberID = QInputDialog::getText(this, "Enter Member ID", "Member ID:", QLineEdit::Normal, QString(), &ok);
    if (!ok) {
        // User pressed "Cancel"
        return;
    }

    // Check if Member ID is already in use
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *item = ui->tableWidget->item(row, 0); // Assuming Member ID is in column 0
        if (item && item->text() == memberID) {
            // Member ID already exists
            QMessageBox::warning(this, "Duplicate Member ID", "The Member ID " + memberID + " is already taken. Please enter a unique Member ID.");
            return;
        }
    }

    QString memberName = QInputDialog::getText(this, "Enter Member Name", "Member Name:", QLineEdit::Normal, QString(), &ok);
    if (!ok) {
        // User pressed "Cancel"
        return;
    }

    QString borrowingBook = QInputDialog::getItem(this, "Is the member borrowing a book?", "Borrowing a Book:", {"Yes", "No"}, 0, false, &ok);
    if (!ok) {
        // User pressed "Cancel"
        return;
    }

    // Check if all fields are filled
    if (!memberID.isEmpty() && !memberName.isEmpty() && !borrowingBook.isEmpty()) {
        // Add a new row to the table widget
        int newRow = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(newRow);
        ui->tableWidget->setItem(newRow, 0, new QTableWidgetItem(memberID));
        ui->tableWidget->setItem(newRow, 1, new QTableWidgetItem(memberName));
        ui->tableWidget->setItem(newRow, 2, new QTableWidgetItem(borrowingBook));

        // Show confirmation message only after all details are added
        QMessageBox::information(this, "Member Added", "The member has been successfully added.");
    } else {
        QMessageBox::warning(this, "Invalid Input", "Please enter all the member details.");
    }
}

void Members::on_deleteMembersButton_clicked()
{
    bool ok; // Used to check if the user pressed "OK" or "Cancel"

    // Prompt the user for the Member ID
    QString memberID = QInputDialog::getText(this, "Delete Member", "Enter the Member ID to delete:", QLineEdit::Normal, QString(), &ok);
    if (!ok) {
        // User pressed "Cancel"
        return;
    }

    if (!memberID.isEmpty()) {
        bool memberFound = false;

        // Iterate over all rows to find the member by ID
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *item = ui->tableWidget->item(row, 0); // Assuming Member ID is in column 0

            if (item && item->text() == memberID) {
                // Remove the row that contains the matching Member ID
                ui->tableWidget->removeRow(row);
                memberFound = true;
                QMessageBox::information(this, "Member Deleted", "Member with ID " + memberID + " has been deleted.");
                break; // Exit loop after deleting the member
            }
        }

        if (!memberFound) {
            QMessageBox::warning(this, "Member Not Found", "No member found with ID " + memberID + ".");
        }
    } else {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid Member ID.");
    }
}
//Displays a message to inform the user that the member item has been edited
void Members::on_itemChanged(QTableWidgetItem *item)
{
    if (item) {
        // Optionally, you can add code here to handle when an item is changed
        QMessageBox::information(this, "Item Edited", "Member data has been edited.");
    }
}
