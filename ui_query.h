/********************************************************************************
** Form generated from reading UI file 'query.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERY_H
#define UI_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Query
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *root;
    QLineEdit *content;
    QPushButton *query;
    QTableView *tableView;

    void setupUi(QDialog *Query)
    {
        if (Query->objectName().isEmpty())
            Query->setObjectName(QStringLiteral("Query"));
        Query->resize(939, 656);
        verticalLayout = new QVBoxLayout(Query);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        root = new QComboBox(Query);
        root->setObjectName(QStringLiteral("root"));

        horizontalLayout->addWidget(root);

        content = new QLineEdit(Query);
        content->setObjectName(QStringLiteral("content"));

        horizontalLayout->addWidget(content);

        query = new QPushButton(Query);
        query->setObjectName(QStringLiteral("query"));

        horizontalLayout->addWidget(query);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 6);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(Query);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(Query);

        QMetaObject::connectSlotsByName(Query);
    } // setupUi

    void retranslateUi(QDialog *Query)
    {
        Query->setWindowTitle(QApplication::translate("Query", "Dialog", 0));
        root->clear();
        root->insertItems(0, QStringList()
         << QApplication::translate("Query", "\351\200\211\346\213\251\346\237\245\350\257\242\346\226\271\345\274\217", 0)
         << QApplication::translate("Query", "\346\214\211\345\247\223\345\220\215", 0)
         << QApplication::translate("Query", "\346\214\211\345\255\246\345\217\267", 0)
         << QApplication::translate("Query", "\346\214\211\351\231\242\347\263\273", 0)
        );
        query->setText(QApplication::translate("Query", "\346\220\234\347\264\242", 0));
    } // retranslateUi

};

namespace Ui {
    class Query: public Ui_Query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_H
