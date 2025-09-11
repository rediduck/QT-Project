/********************************************************************************
** Form generated from reading UI file 'menuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGET_H
#define UI_MENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *addButton;
    QPushButton *selectButton;
    QPushButton *modifyButton;
    QPushButton *sortButton;
    QPushButton *exitButton;

    void setupUi(QWidget *MenuWidget)
    {
        if (MenuWidget->objectName().isEmpty())
            MenuWidget->setObjectName(QString::fromUtf8("MenuWidget"));
        MenuWidget->resize(688, 464);
        gridLayout = new QGridLayout(MenuWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MenuWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setBaseSize(QSize(0, 0));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        addButton = new QPushButton(MenuWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        selectButton = new QPushButton(MenuWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));

        verticalLayout->addWidget(selectButton);

        modifyButton = new QPushButton(MenuWidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));

        verticalLayout->addWidget(modifyButton);

        sortButton = new QPushButton(MenuWidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));

        verticalLayout->addWidget(sortButton);

        exitButton = new QPushButton(MenuWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        verticalLayout->addWidget(exitButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(MenuWidget);

        QMetaObject::connectSlotsByName(MenuWidget);
    } // setupUi

    void retranslateUi(QWidget *MenuWidget)
    {
        MenuWidget->setWindowTitle(QApplication::translate("MenuWidget", "Form", nullptr));
        label->setText(QApplication::translate("MenuWidget", "\345\255\246\347\224\237\344\277\241\346\201\257\347\263\273\347\273\237", nullptr));
        addButton->setText(QApplication::translate("MenuWidget", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        selectButton->setText(QApplication::translate("MenuWidget", "\346\237\245\350\257\242\345\255\246\347\224\237", nullptr));
        modifyButton->setText(QApplication::translate("MenuWidget", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        sortButton->setText(QApplication::translate("MenuWidget", "\344\277\241\346\201\257\346\216\222\345\272\217\346\230\276\347\244\272", nullptr));
        exitButton->setText(QApplication::translate("MenuWidget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWidget: public Ui_MenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGET_H
