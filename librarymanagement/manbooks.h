#ifndef MANBOOKS_H
#define MANBOOKS_H

#include <QDialog>
#include <QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class manBooks;
}
QT_END_NAMESPACE

class manBooks : public QDialog
{
    Q_OBJECT

public:
    explicit manBooks(QWidget *parent = nullptr);
    ~manBooks();

private slots:
    void on_addBookButton_clicked();
    void on_deleteBookButton_clicked();
    void on_itemChanged(QTableWidgetItem *item);

private:
    Ui::manBooks *ui;
};

#endif // MANBOOKS_H
