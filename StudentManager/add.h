#ifndef ADD_H
#define ADD_H

#include <QDialog>

namespace Ui {
class add;
}

class add : public QDialog
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = 0);
    clearuserinfo();
    void writetoflie(QString sir);
    ~add();

private slots:
    void on_ok_clicked();

    void on_cancel_clicked();

private:
    Ui::add *ui;
};

#endif // ADD_H
