/********************************************************************************
** Form generated from reading UI file 'modifywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYWIDGET_H
#define UI_MODIFYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLabel *idLabel;
    QLabel *mathLabel;
    QLabel *enLabel;
    QLabel *clabel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *nameLineEdit;
    QLineEdit *idLineEdit;
    QLineEdit *mathLineEdit;
    QLineEdit *enLineEdit;
    QLineEdit *clineEdit;
    QLineEdit *sexlineEdit;
    QLineEdit *locationlineEdit;
    QLineEdit *emaillineEdit;
    QLineEdit *phonelineEdit;
    QLineEdit *agelineEdit;
    QVBoxLayout *verticalLayout_3;
    QPushButton *modifyButton;
    QPushButton *deleteButton;
    QPushButton *returnButton;

    void setupUi(QWidget *ModifyWidget)
    {
        if (ModifyWidget->objectName().isEmpty())
            ModifyWidget->setObjectName(QString::fromUtf8("ModifyWidget"));
        ModifyWidget->resize(688, 464);
        gridLayout = new QGridLayout(ModifyWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameLabel = new QLabel(ModifyWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout->addWidget(nameLabel);

        idLabel = new QLabel(ModifyWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        verticalLayout->addWidget(idLabel);

        mathLabel = new QLabel(ModifyWidget);
        mathLabel->setObjectName(QString::fromUtf8("mathLabel"));

        verticalLayout->addWidget(mathLabel);

        enLabel = new QLabel(ModifyWidget);
        enLabel->setObjectName(QString::fromUtf8("enLabel"));

        verticalLayout->addWidget(enLabel);

        clabel = new QLabel(ModifyWidget);
        clabel->setObjectName(QString::fromUtf8("clabel"));

        verticalLayout->addWidget(clabel);

        label = new QLabel(ModifyWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(ModifyWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(ModifyWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(ModifyWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(ModifyWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        nameLineEdit = new QLineEdit(ModifyWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        verticalLayout_2->addWidget(nameLineEdit);

        idLineEdit = new QLineEdit(ModifyWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));

        verticalLayout_2->addWidget(idLineEdit);

        mathLineEdit = new QLineEdit(ModifyWidget);
        mathLineEdit->setObjectName(QString::fromUtf8("mathLineEdit"));

        verticalLayout_2->addWidget(mathLineEdit);

        enLineEdit = new QLineEdit(ModifyWidget);
        enLineEdit->setObjectName(QString::fromUtf8("enLineEdit"));

        verticalLayout_2->addWidget(enLineEdit);

        clineEdit = new QLineEdit(ModifyWidget);
        clineEdit->setObjectName(QString::fromUtf8("clineEdit"));

        verticalLayout_2->addWidget(clineEdit);

        sexlineEdit = new QLineEdit(ModifyWidget);
        sexlineEdit->setObjectName(QString::fromUtf8("sexlineEdit"));

        verticalLayout_2->addWidget(sexlineEdit);

        locationlineEdit = new QLineEdit(ModifyWidget);
        locationlineEdit->setObjectName(QString::fromUtf8("locationlineEdit"));

        verticalLayout_2->addWidget(locationlineEdit);

        emaillineEdit = new QLineEdit(ModifyWidget);
        emaillineEdit->setObjectName(QString::fromUtf8("emaillineEdit"));

        verticalLayout_2->addWidget(emaillineEdit);

        phonelineEdit = new QLineEdit(ModifyWidget);
        phonelineEdit->setObjectName(QString::fromUtf8("phonelineEdit"));

        verticalLayout_2->addWidget(phonelineEdit);

        agelineEdit = new QLineEdit(ModifyWidget);
        agelineEdit->setObjectName(QString::fromUtf8("agelineEdit"));

        verticalLayout_2->addWidget(agelineEdit);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        modifyButton = new QPushButton(ModifyWidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));

        verticalLayout_3->addWidget(modifyButton);

        deleteButton = new QPushButton(ModifyWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout_3->addWidget(deleteButton);

        returnButton = new QPushButton(ModifyWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));

        verticalLayout_3->addWidget(returnButton);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);


        retranslateUi(ModifyWidget);

        QMetaObject::connectSlotsByName(ModifyWidget);
    } // setupUi

    void retranslateUi(QWidget *ModifyWidget)
    {
        ModifyWidget->setWindowTitle(QApplication::translate("ModifyWidget", "Form", nullptr));
        nameLabel->setText(QApplication::translate("ModifyWidget", "\345\247\223\345\220\215", nullptr));
        idLabel->setText(QApplication::translate("ModifyWidget", "\345\255\246\345\217\267", nullptr));
        mathLabel->setText(QApplication::translate("ModifyWidget", "\346\225\260\345\255\246\346\210\220\347\273\251", nullptr));
        enLabel->setText(QApplication::translate("ModifyWidget", "\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        clabel->setText(QApplication::translate("ModifyWidget", "c\350\257\255\350\250\200\346\210\220\347\273\251", nullptr));
        label->setText(QApplication::translate("ModifyWidget", "\346\200\247\345\210\253", nullptr));
        label_2->setText(QApplication::translate("ModifyWidget", "\345\234\260\345\235\200", nullptr));
        label_3->setText(QApplication::translate("ModifyWidget", "\351\202\256\347\256\261", nullptr));
        label_4->setText(QApplication::translate("ModifyWidget", "\347\224\265\350\257\235", nullptr));
        label_5->setText(QApplication::translate("ModifyWidget", "\345\271\264\351\276\204", nullptr));
        modifyButton->setText(QApplication::translate("ModifyWidget", "\344\277\256\346\224\271", nullptr));
        deleteButton->setText(QApplication::translate("ModifyWidget", "\345\210\240\351\231\244", nullptr));
        returnButton->setText(QApplication::translate("ModifyWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyWidget: public Ui_ModifyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYWIDGET_H
