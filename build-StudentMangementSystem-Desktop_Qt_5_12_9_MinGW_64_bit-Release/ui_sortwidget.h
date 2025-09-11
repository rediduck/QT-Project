/********************************************************************************
** Form generated from reading UI file 'sortwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTWIDGET_H
#define UI_SORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *avgradioButton;
    QRadioButton *cradioButton;
    QRadioButton *enradioButton;
    QRadioButton *mathradioButton;
    QRadioButton *ageradioButton;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sortButton;
    QPushButton *returnButton;

    void setupUi(QWidget *SortWidget)
    {
        if (SortWidget->objectName().isEmpty())
            SortWidget->setObjectName(QString::fromUtf8("SortWidget"));
        SortWidget->resize(688, 464);
        gridLayout = new QGridLayout(SortWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        avgradioButton = new QRadioButton(SortWidget);
        avgradioButton->setObjectName(QString::fromUtf8("avgradioButton"));

        verticalLayout->addWidget(avgradioButton);

        cradioButton = new QRadioButton(SortWidget);
        cradioButton->setObjectName(QString::fromUtf8("cradioButton"));

        verticalLayout->addWidget(cradioButton);

        enradioButton = new QRadioButton(SortWidget);
        enradioButton->setObjectName(QString::fromUtf8("enradioButton"));

        verticalLayout->addWidget(enradioButton);

        mathradioButton = new QRadioButton(SortWidget);
        mathradioButton->setObjectName(QString::fromUtf8("mathradioButton"));

        verticalLayout->addWidget(mathradioButton);

        ageradioButton = new QRadioButton(SortWidget);
        ageradioButton->setObjectName(QString::fromUtf8("ageradioButton"));

        verticalLayout->addWidget(ageradioButton);

        tableWidget = new QTableWidget(SortWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sortButton = new QPushButton(SortWidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));

        verticalLayout_2->addWidget(sortButton);

        returnButton = new QPushButton(SortWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));

        verticalLayout_2->addWidget(returnButton);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);


        retranslateUi(SortWidget);

        QMetaObject::connectSlotsByName(SortWidget);
    } // setupUi

    void retranslateUi(QWidget *SortWidget)
    {
        SortWidget->setWindowTitle(QApplication::translate("SortWidget", "Form", nullptr));
        avgradioButton->setText(QApplication::translate("SortWidget", "\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        cradioButton->setText(QApplication::translate("SortWidget", "c\350\257\255\350\250\200", nullptr));
        enradioButton->setText(QApplication::translate("SortWidget", "\350\213\261\350\257\255", nullptr));
        mathradioButton->setText(QApplication::translate("SortWidget", "\346\225\260\345\255\246", nullptr));
        ageradioButton->setText(QApplication::translate("SortWidget", "\345\271\264\351\276\204", nullptr));
        sortButton->setText(QApplication::translate("SortWidget", "\346\237\245\350\257\242", nullptr));
        returnButton->setText(QApplication::translate("SortWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortWidget: public Ui_SortWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTWIDGET_H
