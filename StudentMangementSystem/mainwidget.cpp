#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "menuwidget.h"
#include "QDebug"
MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    menuwidget = new MenuWidget;
    addstudentwidget = new AddStudentWidget;
    selectwidget = new SelectWidget;
    modifywidget = new ModifyWidget;
    sortwidget = new SortWidget;
    stackLayout = new QStackedLayout;

    stackLayout->addWidget(menuwidget);
    stackLayout->addWidget(addstudentwidget);
    stackLayout->addWidget(selectwidget);
    stackLayout->addWidget(modifywidget);
    stackLayout->addWidget(sortwidget);
    connect(menuwidget,&MenuWidget::display,this,&MainWidget::handleDisplay);
    connect(addstudentwidget,&AddStudentWidget::display,this,&MainWidget::handleDisplay);
    connect(modifywidget,&ModifyWidget::display,this,&MainWidget::handleDisplay);
    connect(selectwidget,&SelectWidget::display,this,&MainWidget::handleDisplay);
    connect(sortwidget,&SortWidget::display,this,&MainWidget::handleDisplay);
    setLayout(stackLayout);
}

void MainWidget::handleDisplay(int number){
    if(number >= 0 && number < stackLayout->count()){
        stackLayout->setCurrentIndex(number);
        switch(number) {
                case 0:
                    setWindowTitle("学生信息管理系统");
                    break;
                case 1:
                    setWindowTitle("添加学生信息");
                    break;
                case 2:
                    setWindowTitle("查询学生信息");
                    break;
                case 3:
                    setWindowTitle("修改学生信息");
                    break;
                case 4:
                    setWindowTitle("学生信息排序");
                    break;
                default:
                    setWindowTitle("学生信息管理系统");
                    break;
        }
    }
}

MainWidget::~MainWidget()
{
    delete ui;
}
