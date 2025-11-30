#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QStackedLayout>
#include "menuwidget.h"
#include "addstudentwidget.h"
#include "selectwidget.h"
#include "modifywidget.h"
#include "sortwidget.h"


namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
    MenuWidget *menuwidget;
    AddStudentWidget *addstudentwidget;
    SelectWidget *selectwidget;
    ModifyWidget *modifywidget;
    SortWidget *sortwidget;
    QStackedLayout *stackLayout;

private slots:
    void handleDisplay(int number);
};


#endif // MAINWIDGET_H
