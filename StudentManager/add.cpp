#include "add.h"
#include "ui_add.h"
#include <QString>
#include <QMessageBox>
#include <QPushButton>
add::add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
}

add::~add()
{
    delete ui;
}

void add::on_ok_clicked()
{
    QString name=this->ui->name->text();
    QString number=this->ui->number->text();
    QMessageBox msgBox;
      msgBox.setText("添加学生。");
      msgBox.setInformativeText(name+'\n'+number);
//      msgBox.setStandardButtons(QMessageBox::Save| QMessageBox::Cancel);
      msgBox.addButton("确定",QMessageBox::AcceptRole());
      QPushButton * a=msgBox.addButton("取消",QMessageBox::RejectRole());
      msgBox.setDefaultButton(a);
      int ret = msgBox.exec();

}
