/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *number;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QRadioButton *male;
    QRadioButton *maden;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *age;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *major;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName(QStringLiteral("add"));
        add->resize(336, 516);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(add);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(add);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setBaseSize(QSize(0, 0));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(add);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        name = new QLineEdit(add);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout->addWidget(name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(add);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        number = new QLineEdit(add);
        number->setObjectName(QStringLiteral("number"));

        horizontalLayout_2->addWidget(number);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(add);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        male = new QRadioButton(add);
        male->setObjectName(QStringLiteral("male"));

        horizontalLayout_3->addWidget(male);

        maden = new QRadioButton(add);
        maden->setObjectName(QStringLiteral("maden"));

        horizontalLayout_3->addWidget(maden);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 3);
        horizontalLayout_3->setStretch(2, 3);
        horizontalLayout_3->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(add);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        age = new QComboBox(add);
        age->setObjectName(QStringLiteral("age"));

        horizontalLayout_4->addWidget(age);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 3);
        horizontalLayout_4->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(add);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        major = new QComboBox(add);
        major->setObjectName(QStringLiteral("major"));

        horizontalLayout_5->addWidget(major);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 3);
        horizontalLayout_5->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(add);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBox = new QCheckBox(add);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(add);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        checkBox_3 = new QCheckBox(add);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 1, 0, 1, 1);

        checkBox_4 = new QCheckBox(add);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 1, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        ok = new QPushButton(add);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout_7->addWidget(ok);

        cancel = new QPushButton(add);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout_7->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QDialog *add)
    {
        add->setWindowTitle(QApplication::translate("add", "add", 0));
        label->setText(QApplication::translate("add", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\346\267\273\345\212\240\345\255\246\347\224\237</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("add", "\345\247\223\345\220\215", 0));
        name->setPlaceholderText(QApplication::translate("add", "\350\276\223\345\205\245\345\255\246\347\224\237\345\247\223\345\220\215", 0));
        label_3->setText(QApplication::translate("add", "\345\255\246\345\217\267", 0));
        number->setPlaceholderText(QApplication::translate("add", "\350\276\223\345\205\245\345\255\246\347\224\237\345\255\246\345\217\267", 0));
        label_4->setText(QApplication::translate("add", "\346\200\247\345\210\253", 0));
        male->setText(QApplication::translate("add", "\347\224\267", 0));
        maden->setText(QApplication::translate("add", "\345\245\263", 0));
        label_5->setText(QApplication::translate("add", "\345\271\264\351\276\204", 0));
        label_7->setText(QApplication::translate("add", "\344\270\223\344\270\232", 0));
        label_6->setText(QApplication::translate("add", "\345\205\264\350\266\243", 0));
        checkBox->setText(QApplication::translate("add", "\350\266\263\347\220\203", 0));
        checkBox_2->setText(QApplication::translate("add", "\347\257\256\347\220\203", 0));
        checkBox_3->setText(QApplication::translate("add", "\347\276\275\346\257\233\347\220\203", 0));
        checkBox_4->setText(QApplication::translate("add", "\344\271\222\344\271\223\347\220\203", 0));
        ok->setText(QApplication::translate("add", "\347\241\256\345\256\232", 0));
        cancel->setText(QApplication::translate("add", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
