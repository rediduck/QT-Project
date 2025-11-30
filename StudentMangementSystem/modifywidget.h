#ifndef MODIFYWIDGET_H
#define MODIFYWIDGET_H

#include <QWidget>
#include <QFile>
#include <QtDebug>
#include <QVector>
#include "studentinfo.h"
#include <QMessageBox>

namespace Ui {
class ModifyWidget;
}

class ModifyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ModifyWidget(QWidget *parent = nullptr);
    ~ModifyWidget();



private slots:
    void on_returnButton_clicked();
    void on_modifyButton_clicked();
    void on_deleteButton_clicked();

signals:
    void display(int number);

private:
    Ui::ModifyWidget *ui;
};

#endif // MODIFYWIDGET_H
