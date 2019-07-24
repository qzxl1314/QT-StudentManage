#ifndef QUERY_H
#define QUERY_H

#include <QDialog>
#include <QFile>
#include <QList>
#include <QString>
#include <QStandardItem>
#include <QStandardItemModel>
namespace Ui {
class Query;
}

class Query : public QDialog
{
    Q_OBJECT

public:
    explicit Query(QWidget *parent = 0);
    ~Query();
    int readfile();
    void doquery(QString cnt,int root);
    void display(int row,QStringList subs);
private slots:
    void on_query_clicked();

private:
    Ui::Query *ui;
    QList<QString> line;
    QStandardItemModel * a;
};

#endif // QUERY_H
