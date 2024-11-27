#ifndef BORROWRETURN_H
#define BORROWRETURN_H

#include <QDialog>

namespace Ui {
class borrowReturn;
}

class borrowReturn : public QDialog
{
    Q_OBJECT

public:
    explicit borrowReturn(QWidget *parent = nullptr);
    ~borrowReturn();

private slots:
    void on_borrowButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::borrowReturn *ui;
};

#endif // BORROWRETURN_H
