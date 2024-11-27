#ifndef MEMBERS_H
#define MEMBERS_H

#include <QDialog>
#include <QTableWidgetItem>
namespace Ui {
class Members;
}

class Members : public QDialog
{
    Q_OBJECT

public:
    explicit Members(QWidget *parent = nullptr);
    ~Members();

private slots:
    void on_addMembersButton_clicked();
    void on_deleteMembersButton_clicked();
    void on_itemChanged(QTableWidgetItem *item);

private:
    Ui::Members *ui;
};

#endif // MEMBERS_H
