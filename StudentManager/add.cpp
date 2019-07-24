#include "add.h"
#include "ui_add.h"
#include <QString>
#include <QMessageBox>
#include <QPushButton>
#include <QList>
#include <QAbstractButton>
#include <QCheckBox>
#include <QIODevice>
#include <QFile>
#include <QTextStream>
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
add::clearuserinfo(){
    this->ui->name->setText("");
    this->ui->number->setText("");
    this->ui->male->setChecked(true);
    this->ui->age->setCurrentIndex(0);
    this->ui->major->setCurrentIndex(0);
    QList<QAbstractButton*> ins_LIST=this->ui->insGroup->buttons();
    for(int i=0;i<ins_LIST.length();i++){
        QAbstractButton * che=ins_LIST.at(i);
        che->setChecked(false);
    }
}
void add::on_ok_clicked()
{
    QString name=this->ui->name->text();
    QString number=this->ui->number->text();       
    QString sex=this->ui->sexGroup->checkedButton()->text();
    QList<QAbstractButton*> ins_LIST=this->ui->insGroup->buttons();
    QString ins;
    for(int i=0;i<ins_LIST.length();i++){
        QAbstractButton * che=ins_LIST.at(i);
        if(che->isChecked())
            ins+=che->text()+" ";
    }
    QString age=this->ui->age->currentText();
    QString major=this->ui->major->currentText();
    QString str=name+" "+number+" "+sex+" "+age+" "+major+" "+ins+"\n";
    if(name.length()<1||number.length()<1){
        QMessageBox::critical(this,"错误","信息不完整","确定");
    }else{
       int ret=QMessageBox::question(this,"请确认信息",name+"\n"+number+"\n"+sex+"\n"+age+"\n"+major+"\n"+ins+"\n","确认","取消");
       if(ret==0){
           clearuserinfo();
           writetoflie(str);
       }
    }
}
void add::writetoflie(QString sir)
{
    QFile file("stu.txt");
    if(!file.open(QIODevice::Append |QIODevice::Text)){
        QMessageBox::critical(this,"错误","信息上传失败！","确定  ");
        return;
    }
    QTextStream out(&file);
    out<<sir;
    file.close();
}




void add::on_cancel_clicked()
{
    this->close();
}
