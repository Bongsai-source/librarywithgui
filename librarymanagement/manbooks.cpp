#include "manbooks.h"
#include "ui_manbooks.h"

#include <QInputDialog>
#include <QMessageBox>

manBooks::manBooks(QWidget *parent)
    : QDialog(parent)  // Change QMainWindow to QDialog
    , ui(new Ui::manBooks)
{
    ui->setupUi(this);

    // Connect buttons to slots
    connect(ui->addBookButton, &QPushButton::clicked, this, &manBooks::on_addBookButton_clicked);
    connect(ui->deleteBookButton, &QPushButton::clicked, this, &manBooks::on_deleteBookButton_clicked);
}

manBooks::~manBooks()
{
    delete ui;
}

void manBooks::on_addBookButton_clicked()
{
    bool ok; // Used to check if the user pressed "OK" or "Cancel"

    // Get book details from user
    QString bookID = QInputDialog::getText(this, "Enter Book ID", "Book ID:", QLineEdit::Normal, QString(), &ok);
    if (!ok) {
        // User pressed "Cancel"
        return;
    }

    // Check if Book ID is already in use
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *item = ui->tableWidget->item(row, 0); // Assuming Book ID is in column 0
        if (item && item->text() == bookID) {
            // Book ID already exists
            QMessageBox::warning(this, "Duplicate Book ID", "The Book ID " + bookID + " is already taken. Please enter a unique Book ID.");
            return;
        }
    }

    QString title = QInputDialog::getText(this, "Enter Book Title", "Title:", QLineEdit::Normal, QString(), &ok);
    if (!ok) {
        // User pressed "Cancel"
        return;
    }

    QString author = QInputDialog::getText(this, "Enter Book Author", "Author:", QLineEdit::Normal, QString(), &ok);
    if (!ok) {
        // User pressed "Cancel"
        return;
    }

    // Dropdown to choose the book genre
    QStringList genres = {"Fiction", "Non-Fiction", "Mystery", "Fantasy", "Science Fiction", "Romance", "Horror", "Biography", "Self-Help", "History"};
    QString genre = QInputDialog::getItem(this, "Select Book Genre", "Genre:", genres, 0, false, &ok);
    if (!ok) {
        // User pressed "Cancel"
        return;
    }

    // Check if all fields are filled
    if (!bookID.isEmpty() && !title.isEmpty() && !author.isEmpty() && !genre.isEmpty()) {
        // Add a new row to the table widget
        int newRow = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(newRow);
        ui->tableWidget->setItem(newRow, 0, new QTableWidgetItem(bookID));
        ui->tableWidget->setItem(newRow, 1, new QTableWidgetItem(title));
        ui->tableWidget->setItem(newRow, 2, new QTableWidgetItem(author));
        ui->tableWidget->setItem(newRow, 3, new QTableWidgetItem(genre));
        ui->tableWidget->setItem(newRow, 4, new QTableWidgetItem("Yes")); // Availability set to "Yes"

        // Show confirmation message only after all details are added
        QMessageBox::information(this, "Book Added", "The book has been successfully added.");
    } else {
        QMessageBox::warning(this, "Invalid Input", "Please enter all the book details.");
    }
}

void manBooks::on_deleteBookButton_clicked()
{
    bool ok; // Used to check if the user pressed "OK" or "Cancel"

    // Prompt the user for the Book ID
    QString bookID = QInputDialog::getText(this, "Delete Book", "Enter the Book ID to delete:", QLineEdit::Normal, QString(), &ok);
    if (!ok) {
        // User pressed "Cancel"
        return;
    }

    if (!bookID.isEmpty()) {
        bool bookFound = false;

        // Iterate over all rows to find the book by ID
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *item = ui->tableWidget->item(row, 0); // Assuming Book ID is in column 0

            if (item && item->text() == bookID) {
                // Remove the row that contains the matching Book ID
                ui->tableWidget->removeRow(row);
                bookFound = true;
                QMessageBox::information(this, "Book Deleted", "Book with ID " + bookID + " has been deleted.");
                break; // Exit loop after deleting the book
            }
        }

        if (!bookFound) {
            QMessageBox::warning(this, "Book Not Found", "No book found with ID " + bookID + ".");
        }
    } else {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid Book ID.");
    }
}
//Displays a message to inform the user that the book item has been edited
void manBooks::on_itemChanged(QTableWidgetItem *item)
{
    if (item) {
        QMessageBox::information(this, "Item Edited", "Book data has been edited.");
    }
}
