/********************************************************************************
** Form generated from reading UI file 'addstudentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTWIDGET_H
#define UI_ADDSTUDENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudentWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *nameLable;
    QLabel *idLable;
    QLabel *mathLable;
    QLabel *enLable;
    QLabel *cLable;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *namelineEdit;
    QLineEdit *idlineEdit;
    QLineEdit *mathlineEdit;
    QLineEdit *enlineEdit;
    QLineEdit *clineEdit;
    QLineEdit *sexlineEdit;
    QLineEdit *locationlineEdit;
    QLineEdit *phonelineEdit;
    QLineEdit *emaillineEdit;
    QLineEdit *agelineEdit;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addButton;
    QPushButton *returnButton;

    void setupUi(QWidget *AddStudentWidget)
    {
        if (AddStudentWidget->objectName().isEmpty())
            AddStudentWidget->setObjectName(QString::fromUtf8("AddStudentWidget"));
        AddStudentWidget->resize(688, 464);
        gridLayout = new QGridLayout(AddStudentWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameLable = new QLabel(AddStudentWidget);
        nameLable->setObjectName(QString::fromUtf8("nameLable"));
        nameLable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(nameLable);

        idLable = new QLabel(AddStudentWidget);
        idLable->setObjectName(QString::fromUtf8("idLable"));
        idLable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(idLable);

        mathLable = new QLabel(AddStudentWidget);
        mathLable->setObjectName(QString::fromUtf8("mathLable"));
        mathLable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(mathLable);

        enLable = new QLabel(AddStudentWidget);
        enLable->setObjectName(QString::fromUtf8("enLable"));
        enLable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(enLable);

        cLable = new QLabel(AddStudentWidget);
        cLable->setObjectName(QString::fromUtf8("cLable"));
        cLable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(cLable);

        label = new QLabel(AddStudentWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(AddStudentWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(AddStudentWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(AddStudentWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(AddStudentWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        namelineEdit = new QLineEdit(AddStudentWidget);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        verticalLayout_2->addWidget(namelineEdit);

        idlineEdit = new QLineEdit(AddStudentWidget);
        idlineEdit->setObjectName(QString::fromUtf8("idlineEdit"));

        verticalLayout_2->addWidget(idlineEdit);

        mathlineEdit = new QLineEdit(AddStudentWidget);
        mathlineEdit->setObjectName(QString::fromUtf8("mathlineEdit"));

        verticalLayout_2->addWidget(mathlineEdit);

        enlineEdit = new QLineEdit(AddStudentWidget);
        enlineEdit->setObjectName(QString::fromUtf8("enlineEdit"));

        verticalLayout_2->addWidget(enlineEdit);

        clineEdit = new QLineEdit(AddStudentWidget);
        clineEdit->setObjectName(QString::fromUtf8("clineEdit"));

        verticalLayout_2->addWidget(clineEdit);

        sexlineEdit = new QLineEdit(AddStudentWidget);
        sexlineEdit->setObjectName(QString::fromUtf8("sexlineEdit"));

        verticalLayout_2->addWidget(sexlineEdit);

        locationlineEdit = new QLineEdit(AddStudentWidget);
        locationlineEdit->setObjectName(QString::fromUtf8("locationlineEdit"));

        verticalLayout_2->addWidget(locationlineEdit);

        phonelineEdit = new QLineEdit(AddStudentWidget);
        phonelineEdit->setObjectName(QString::fromUtf8("phonelineEdit"));

        verticalLayout_2->addWidget(phonelineEdit);

        emaillineEdit = new QLineEdit(AddStudentWidget);
        emaillineEdit->setObjectName(QString::fromUtf8("emaillineEdit"));

        verticalLayout_2->addWidget(emaillineEdit);

        agelineEdit = new QLineEdit(AddStudentWidget);
        agelineEdit->setObjectName(QString::fromUtf8("agelineEdit"));

        verticalLayout_2->addWidget(agelineEdit);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        addButton = new QPushButton(AddStudentWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout_3->addWidget(addButton);

        returnButton = new QPushButton(AddStudentWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));

        verticalLayout_3->addWidget(returnButton);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);


        retranslateUi(AddStudentWidget);

        QMetaObject::connectSlotsByName(AddStudentWidget);
    } // setupUi

    void retranslateUi(QWidget *AddStudentWidget)
    {
        AddStudentWidget->setWindowTitle(QApplication::translate("AddStudentWidget", "Form", nullptr));
        nameLable->setText(QApplication::translate("AddStudentWidget", "\345\247\223\345\220\215", nullptr));
        idLable->setText(QApplication::translate("AddStudentWidget", "\345\255\246\345\217\267", nullptr));
        mathLable->setText(QApplication::translate("AddStudentWidget", "\346\225\260\345\255\246\346\210\220\347\273\251", nullptr));
        enLable->setText(QApplication::translate("AddStudentWidget", "\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        cLable->setText(QApplication::translate("AddStudentWidget", "c\350\257\255\350\250\200\346\210\220\347\273\251", nullptr));
        label->setText(QApplication::translate("AddStudentWidget", "\346\200\247\345\210\253", nullptr));
        label_2->setText(QApplication::translate("AddStudentWidget", "\345\234\260\345\235\200", nullptr));
        label_3->setText(QApplication::translate("AddStudentWidget", "\347\224\265\350\257\235", nullptr));
        label_4->setText(QApplication::translate("AddStudentWidget", "\351\202\256\347\256\261", nullptr));
        label_5->setText(QApplication::translate("AddStudentWidget", "\345\271\264\351\276\204", nullptr));
        addButton->setText(QApplication::translate("AddStudentWidget", "\346\267\273\345\212\240", nullptr));
        returnButton->setText(QApplication::translate("AddStudentWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentWidget: public Ui_AddStudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTWIDGET_H
