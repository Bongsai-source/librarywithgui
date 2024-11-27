#include "borrowreturn.h"
#include "ui_borrowreturn.h"
#include <QInputDialog>
#include <QMessageBox>
#include <QDate>

borrowReturn::borrowReturn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::borrowReturn)
{
    ui->setupUi(this);

    // Connect buttons to respective slot functions
    connect(ui->borrowButton, &QPushButton::clicked, this, &borrowReturn::on_borrowButton_clicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &borrowReturn::on_pushButton_2_clicked);
}

borrowReturn::~borrowReturn()
{
    delete ui;
}

/**
 * @brief Handles the borrowing of a book.
 * This function takes user input for book ID and borrower details,
 * updates the table with the borrowing information, and displays a confirmation message.
 */
void borrowReturn::on_borrowButton_clicked()
{
    bool ok;

    // Get the book ID from the user
    QString bookID = QInputDialog::getText(this, "Borrow Book", "Enter the Book ID to borrow:", QLineEdit::Normal, QString(), &ok);
    if (!ok || bookID.isEmpty()) {
        // User pressed "Cancel" or did not provide an ID
        return;
    }

    // Search for the book ID in the table
    int rowCount = ui->tableWidget->rowCount();
    bool bookFound = false;

    for (int row = 0; row < rowCount; ++row) {
        QTableWidgetItem *idItem = ui->tableWidget->item(row, 0); // Book ID is in column 0

        if (idItem && idItem->text() == bookID) {
            bookFound = true;

            // Check if the book is available
            QTableWidgetItem *borrowedOnItem = ui->tableWidget->item(row, 2); // "Borrowed On" is in column 2
            if (borrowedOnItem && borrowedOnItem->text() != "N/A") {
                // Book is already borrowed
                QMessageBox::warning(this, "Book Unavailable", "The book is currently unavailable.");
                return;
            }

            // Get borrower details
            QString borrowerName = QInputDialog::getText(this, "Borrow Book", "Enter the borrower's name:", QLineEdit::Normal, QString(), &ok);
            if (!ok || borrowerName.isEmpty()) {
                // User pressed "Cancel" or did not provide a name
                return;
            }

            // Set the borrowing date to today
            QDate borrowDate = QDate::currentDate();
            QString borrowDateStr = borrowDate.toString("MM/dd/yyyy");

            // Update the table with borrowing information
            borrowedOnItem->setText(borrowDateStr);

            QTableWidgetItem *borrowedByItem = ui->tableWidget->item(row, 3); // "Borrowed By" is in column 3
            borrowedByItem->setText(borrowerName);

            // Calculate the return date (3 days after borrowing)
            QDate returnDate = borrowDate.addDays(3);
            QString returnDateStr = returnDate.toString("MM/dd/yyyy");

            // Display borrowing confirmation message
            QMessageBox::information(this, "Book Borrowed", "The book has been successfully borrowed by " + borrowerName + ".\nPlease return by " + returnDateStr + ".");

            break; // Exit loop after processing the book
        }
    }

    // Display warning if book ID not found
    if (!bookFound) {
        QMessageBox::warning(this, "Book Not Found", "No book found with ID " + bookID + ".");
    }
}

/**
 * @brief Handles the return of a book.
 * This function takes user input for book ID, checks if the book is overdue,
 * calculates any applicable fines, and updates the table to mark the book as returned.
 */
void borrowReturn::on_pushButton_2_clicked()
{
    bool ok;

    // Get the book ID from the user
    QString bookID = QInputDialog::getText(this, "Return Book", "Enter the Book ID to return:", QLineEdit::Normal, QString(), &ok);
    if (!ok || bookID.isEmpty()) {
        // User pressed "Cancel" or did not provide an ID
        return;
    }

    // Search for the book ID in the table
    int rowCount = ui->tableWidget->rowCount();
    bool bookFound = false;

    for (int row = 0; row < rowCount; ++row) {
        QTableWidgetItem *idItem = ui->tableWidget->item(row, 0); // Book ID is in column 0

        if (idItem && idItem->text() == bookID) {
            bookFound = true;

            // Check if the book is currently borrowed
            QTableWidgetItem *borrowedOnItem = ui->tableWidget->item(row, 2); // "Borrowed On" is in column 2
            if (borrowedOnItem && borrowedOnItem->text() == "N/A") {
                // Book is not currently borrowed
                QMessageBox::warning(this, "Book Not Borrowed", "The book is not currently borrowed.");
                return;
            }

            // Check if the book is overdue
            QString borrowedDateStr = borrowedOnItem->text();
            QDate borrowedDate = QDate::fromString(borrowedDateStr, "MM/dd/yyyy");
            QDate currentDate = QDate::currentDate();
            int daysBorrowed = borrowedDate.daysTo(currentDate);
            int overdueDays = daysBorrowed - 3;

            if (overdueDays > 0) {
                // Book is overdue; calculate fine
                int fineAmount = overdueDays * 10; // Fine of 10 PHP per overdue day
                QMessageBox::warning(this, "Book Overdue", "The book is overdue by " + QString::number(overdueDays) + " days.\nThe fine is " + QString::number(fineAmount) + " PHP.");
            } else {
                // Book is not overdue
                QMessageBox::information(this, "Book Returned", "The book is not overdue. No fines.");
            }

            // Update the table to mark the book as returned
            borrowedOnItem->setText("N/A");
            QTableWidgetItem *borrowedByItem = ui->tableWidget->item(row, 3); // "Borrowed By" is in column 3
            borrowedByItem->setText("N/A");

            // Display a confirmation message
            QMessageBox::information(this, "Book Returned", "The book has been successfully returned.");

            break; // Exit loop after processing the book
        }
    }

    // Display warning if book ID not found
    if (!bookFound) {
        QMessageBox::warning(this, "Book Not Found", "No book found with ID " + bookID + ".");
    }
}
