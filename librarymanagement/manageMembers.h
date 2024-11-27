#ifndef MANAGEMEMBERS_H
#define MANAGEMEMBERS_H

#include <QDialog>
#include <QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class manageMembers;
}
QT_END_NAMESPACE

class manageMembers : public QDialog  // Change inheritance to QDialog
{
    Q_OBJECT

public:
    explicit manageMembers(QWidget *parent = nullptr);
    ~manageMembers();

private slots:
    void on_addMembersButton_clicked();
    void on_deleteMembersButton_clicked();
    void on_itemChanged(QTableWidgetItem *item); // Slot to handle edits

private:
    Ui::manageMembers *ui;
};

#endif // MANAGEMEMBERS_H
