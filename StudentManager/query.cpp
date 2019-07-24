#include "query.h"
#include "ui_query.h"
#include <QTextStream>
#include <QMessageBox>
#include <QString>
#include <QStringList>
#include <QStandardItem>
#include <QStandardItemModel>
Query::Query(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Query)
{
    ui->setupUi(this);
    if(readfile()==-1){
        this->close();
        QMessageBox::critical(this,"警告","文件打开失败！");
    }
    this->a=new QStandardItemModel;
    this->a->setHorizontalHeaderItem(0,new QStandardItem("姓名"));
    this->a->setHorizontalHeaderItem(1,new QStandardItem("学号"));
    this->a->setHorizontalHeaderItem(2,new QStandardItem("性别"));
    this->a->setHorizontalHeaderItem(3,new QStandardItem("年龄"));
    this->a->setHorizontalHeaderItem(4,new QStandardItem("院系"));
    this->a->setHorizontalHeaderItem(5,new QStandardItem("兴趣"));
    this->ui->tableView->setModel(a);
    this->ui->tableView->setColumnWidth(0,100);
      this->ui->tableView->setColumnWidth(1,150);
      this->ui->tableView->setColumnWidth(2,50);
      this->ui->tableView->setColumnWidth(3,60);
      this->ui->tableView->setColumnWidth(4,100);
      this->ui->tableView->setColumnWidth(5,150);
}

Query::~Query()
{
    delete ui;
}
Query::readfile(){

    QFile file("stu.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return -1;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString linea = in.readLine();
        line.append(linea);
    }
    file.close();
    return 0;
}

void Query::on_query_clicked()
{
    this->a->clear();
    this->a=new QStandardItemModel;
    this->a->setHorizontalHeaderItem(0,new QStandardItem("姓名"));
    this->a->setHorizontalHeaderItem(1,new QStandardItem("学号"));
    this->a->setHorizontalHeaderItem(2,new QStandardItem("性别"));
    this->a->setHorizontalHeaderItem(3,new QStandardItem("年龄"));
    this->a->setHorizontalHeaderItem(4,new QStandardItem("院系"));
    this->a->setHorizontalHeaderItem(5,new QStandardItem("兴趣"));
    this->ui->tableView->setModel(a);
    this->ui->tableView->setColumnWidth(0,100);
      this->ui->tableView->setColumnWidth(1,150);
      this->ui->tableView->setColumnWidth(2,50);
      this->ui->tableView->setColumnWidth(3,60);
      this->ui->tableView->setColumnWidth(4,100);
      this->ui->tableView->setColumnWidth(5,150);
    int root=this->ui->root->currentIndex();
    QString content=this->ui->content->text();
    doquery(content,root);

}
void Query::display(int row,QStringList subs){
    for(int i=0;i<5;i++)
    {
        this->a->setItem(row,i,new QStandardItem(subs.at(i)) );
    }
    QString ins;
    for(int i=5;i<subs.length();i++)
    {
        ins+=subs.at(i)+",";
    }
    this->a->setItem(row,5,new QStandardItem(ins));
}

void Query::doquery(QString cnt, int root){
    for(int i=0;i<line.length();i++){
        QString line1=line.at(i);
        line1=line1.trimmed();
        QStringList subs=line1.split(" ");

    switch (root) {
    case 1:
        if(subs.at(0)==cnt)
            display(i,subs);
        break;
    case 2:
        if(subs.at(1)==cnt)
            display(i,subs);
        break;
    case 3:
        if(subs.at(4)==cnt)
            display(i,subs);
        break;
    default:
        break;
    }
    }
}
