#include "addstudentwidget.h"
#include "ui_addstudentwidget.h"

AddStudentWidget::AddStudentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddStudentWidget)
{
    ui->setupUi(this);
    setWindowTitle("添加学生信息");
}

AddStudentWidget::~AddStudentWidget()
{
    delete ui;
}

void AddStudentWidget::on_returnButton_clicked(){
    emit display(0);
}

void AddStudentWidget::on_addButton_clicked(){  //"添加"按钮点击
    bool idok1,idok2,idok3,idok4,idok5;
    idok1=true;
    idok2=true;
    idok3=true;
    idok4=true;
    idok5=true;
    QString name = ui->namelineEdit->text();
    //将用户输入的姓名由nameLineEdit取出
    int id = ui->idlineEdit->text().toInt(&idok1);
    //将用户输入的学号由idLineEdit取出，并转换为整型
    int math = ui->mathlineEdit->text().toInt(&idok2);
    //将用户输入的学号由mathLineEdit取出，并转换为整型
    int english = ui->enlineEdit->text().toInt(&idok3);
    //将用户输入的学号由enLineEdit取出，并转化为整型
    int languageC = ui->clineEdit->text().toInt(&idok4);
    //将用户输入的学号由cLineEdit取出，并转化为整型
    int age = ui->agelineEdit->text().toInt(&idok5);

    QString sex = ui->sexlineEdit->text();
    QString location = ui->locationlineEdit->text();
    QString email = ui->emaillineEdit->text();
    QString phone = ui->phonelineEdit->text();
    if(ui->namelineEdit->text() == "" || ui->idlineEdit->text() == "" || ui->mathlineEdit->text() == "" || ui->enlineEdit->text() == "" || ui->clineEdit->text() == ""||ui->agelineEdit->text() == ""||ui->sexlineEdit->text() == ""||ui->locationlineEdit->text() == ""||ui->emaillineEdit->text() == ""||ui->phonelineEdit->text() == ""){
        //插入的五项数据都不能为空，否则在读取文件时会出现问题。
        QMessageBox::about(NULL, "反馈", "存在空项");
    }
    else if(math<0 || math>150)
    {
        QMessageBox::about(NULL, "反馈", "数学成绩输入不正确，请检查");
    }
    else if(english<0 || english>150)
    {
        QMessageBox::about(NULL, "反馈", "英语成绩输入不正确，请检查");
    }
    else if(languageC<0 || languageC>150)
    {
        QMessageBox::about(NULL, "反馈", "c语言成绩输入不正确，请检查");
    }
    else if(age<0 || age>150)
    {
        QMessageBox::about(NULL, "反馈", "年龄输入不正确，请检查");
    }
    else if((sex != "男")&&(sex !="女"))
    {
        QMessageBox::about(NULL, "反馈", "性别输入不正确，请输入“男”或“女”");
    }
    else if(idok1!=true ||idok2!=true||idok3!=true||idok4!=true||idok5!=true )
    {
        if(idok1!=true){
            QMessageBox::about(NULL, "反馈", "请在学号处输入数字");
        }
        if(idok2!=true){
            QMessageBox::about(NULL, "反馈", "请在数学成绩处输入数字");
        }
        if(idok3!=true){
            QMessageBox::about(NULL, "反馈", "请在英语成绩处输入数字");
        }
        if(idok4!=true){
            QMessageBox::about(NULL, "反馈", "请在c语言成绩处输入数字");
        }
        if(idok5!=true){
            QMessageBox::about(NULL, "反馈", "请在年龄处输入数字");
        }
    }
    else
    {
        QFile file("student.txt");
        //实例化一个QFile file为我们的数据文件student.txt
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
        //open()可以用来打开文件这里QIODevice::WriteOnly代表将文件以只写的方式打开
        //QIODevice::Text代表我们打开的是文本文件，QIODevice::Text会对end-of-line结束符进行转译
        //QIODevice::Append以追加的方式打开，新增加的内容将被追加到文件末尾
        if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
            QMessageBox::about(NULL, "反馈", "数据文件打开失败");
            return;
        }
        QTextStream out(&file);
        //QTextStream可以进行一些基本的文本读写，比如QString int char之类的数据QDataStream可以进行一个如QMap QPoint之类数据的读写。
        out << name << " " <<  id << " " << math << " " << english << " " << languageC << " " << sex << " " << location << " " << email << " " << phone << " " << age << endl;
        //将我们刚刚获取的数据写入文件
        file.close();
        QMessageBox::about(NULL, "反馈", "插入成功");
        ui->namelineEdit->clear();
        ui->idlineEdit->clear();
        ui->mathlineEdit->clear();
        ui->enlineEdit->clear();
        ui->clineEdit->clear();
        ui->sexlineEdit->clear();
        ui->locationlineEdit->clear();
        ui->emaillineEdit->clear();
        ui->phonelineEdit->clear();
        ui->agelineEdit->clear();
    }
    //将用户输入的数据清空
}
