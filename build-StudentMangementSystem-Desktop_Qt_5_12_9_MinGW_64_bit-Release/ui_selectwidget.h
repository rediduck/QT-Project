/********************************************************************************
** Form generated from reading UI file 'selectwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIDGET_H
#define UI_SELECTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *idlabel;
    QLabel *namelabel;
    QLabel *mathlabel;
    QLabel *enlabel;
    QLabel *clabel;
    QLabel *avglabel;
    QLabel *label;
    QLabel *label1;
    QLabel *label_3;
    QLabel *phonelabel;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *idLineEdit;
    QLabel *showNameLabel;
    QLabel *showMathLabel;
    QLabel *showEnLabel;
    QLabel *showCLabel;
    QLabel *showAvgLabel;
    QLabel *showSexLabel;
    QLabel *showLocationLabel;
    QLabel *showEmailLabel;
    QLabel *showPhoneLabel;
    QLabel *showAgeLabel;
    QVBoxLayout *verticalLayout_4;
    QPushButton *selectButton;
    QPushButton *returnButton;

    void setupUi(QWidget *SelectWidget)
    {
        if (SelectWidget->objectName().isEmpty())
            SelectWidget->setObjectName(QString::fromUtf8("SelectWidget"));
        SelectWidget->resize(688, 464);
        gridLayout = new QGridLayout(SelectWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        idlabel = new QLabel(SelectWidget);
        idlabel->setObjectName(QString::fromUtf8("idlabel"));

        verticalLayout->addWidget(idlabel);

        namelabel = new QLabel(SelectWidget);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));

        verticalLayout->addWidget(namelabel);

        mathlabel = new QLabel(SelectWidget);
        mathlabel->setObjectName(QString::fromUtf8("mathlabel"));

        verticalLayout->addWidget(mathlabel);

        enlabel = new QLabel(SelectWidget);
        enlabel->setObjectName(QString::fromUtf8("enlabel"));

        verticalLayout->addWidget(enlabel);

        clabel = new QLabel(SelectWidget);
        clabel->setObjectName(QString::fromUtf8("clabel"));

        verticalLayout->addWidget(clabel);

        avglabel = new QLabel(SelectWidget);
        avglabel->setObjectName(QString::fromUtf8("avglabel"));

        verticalLayout->addWidget(avglabel);

        label = new QLabel(SelectWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label1 = new QLabel(SelectWidget);
        label1->setObjectName(QString::fromUtf8("label1"));

        verticalLayout->addWidget(label1);

        label_3 = new QLabel(SelectWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        phonelabel = new QLabel(SelectWidget);
        phonelabel->setObjectName(QString::fromUtf8("phonelabel"));

        verticalLayout->addWidget(phonelabel);

        label_5 = new QLabel(SelectWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        idLineEdit = new QLineEdit(SelectWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));

        verticalLayout_2->addWidget(idLineEdit);

        showNameLabel = new QLabel(SelectWidget);
        showNameLabel->setObjectName(QString::fromUtf8("showNameLabel"));

        verticalLayout_2->addWidget(showNameLabel);

        showMathLabel = new QLabel(SelectWidget);
        showMathLabel->setObjectName(QString::fromUtf8("showMathLabel"));

        verticalLayout_2->addWidget(showMathLabel);

        showEnLabel = new QLabel(SelectWidget);
        showEnLabel->setObjectName(QString::fromUtf8("showEnLabel"));

        verticalLayout_2->addWidget(showEnLabel);

        showCLabel = new QLabel(SelectWidget);
        showCLabel->setObjectName(QString::fromUtf8("showCLabel"));

        verticalLayout_2->addWidget(showCLabel);

        showAvgLabel = new QLabel(SelectWidget);
        showAvgLabel->setObjectName(QString::fromUtf8("showAvgLabel"));

        verticalLayout_2->addWidget(showAvgLabel);

        showSexLabel = new QLabel(SelectWidget);
        showSexLabel->setObjectName(QString::fromUtf8("showSexLabel"));

        verticalLayout_2->addWidget(showSexLabel);

        showLocationLabel = new QLabel(SelectWidget);
        showLocationLabel->setObjectName(QString::fromUtf8("showLocationLabel"));

        verticalLayout_2->addWidget(showLocationLabel);

        showEmailLabel = new QLabel(SelectWidget);
        showEmailLabel->setObjectName(QString::fromUtf8("showEmailLabel"));

        verticalLayout_2->addWidget(showEmailLabel);

        showPhoneLabel = new QLabel(SelectWidget);
        showPhoneLabel->setObjectName(QString::fromUtf8("showPhoneLabel"));

        verticalLayout_2->addWidget(showPhoneLabel);

        showAgeLabel = new QLabel(SelectWidget);
        showAgeLabel->setObjectName(QString::fromUtf8("showAgeLabel"));

        verticalLayout_2->addWidget(showAgeLabel);


        verticalLayout_3->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        selectButton = new QPushButton(SelectWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));

        verticalLayout_4->addWidget(selectButton);

        returnButton = new QPushButton(SelectWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));

        verticalLayout_4->addWidget(returnButton);


        gridLayout->addLayout(verticalLayout_4, 0, 2, 1, 1);


        retranslateUi(SelectWidget);

        QMetaObject::connectSlotsByName(SelectWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectWidget)
    {
        SelectWidget->setWindowTitle(QApplication::translate("SelectWidget", "Form", nullptr));
        idlabel->setText(QApplication::translate("SelectWidget", "\345\255\246\345\217\267", nullptr));
        namelabel->setText(QApplication::translate("SelectWidget", "\345\247\223\345\220\215", nullptr));
        mathlabel->setText(QApplication::translate("SelectWidget", "\346\225\260\345\255\246\346\210\220\347\273\251", nullptr));
        enlabel->setText(QApplication::translate("SelectWidget", "\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        clabel->setText(QApplication::translate("SelectWidget", "c\350\257\255\350\250\200\346\210\220\347\273\251", nullptr));
        avglabel->setText(QApplication::translate("SelectWidget", "\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        label->setText(QApplication::translate("SelectWidget", "\346\200\247\345\210\253", nullptr));
        label1->setText(QApplication::translate("SelectWidget", "\345\234\260\345\235\200", nullptr));
        label_3->setText(QApplication::translate("SelectWidget", "\351\202\256\347\256\261", nullptr));
        phonelabel->setText(QApplication::translate("SelectWidget", "\347\224\265\350\257\235", nullptr));
        label_5->setText(QApplication::translate("SelectWidget", "\345\271\264\351\276\204", nullptr));
        showNameLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        showMathLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        showEnLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        showCLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        showAvgLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        showSexLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        showLocationLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        showEmailLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        showPhoneLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        showAgeLabel->setText(QApplication::translate("SelectWidget", "NULL", nullptr));
        selectButton->setText(QApplication::translate("SelectWidget", "\346\237\245\350\257\242", nullptr));
        returnButton->setText(QApplication::translate("SelectWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWidget: public Ui_SelectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIDGET_H
