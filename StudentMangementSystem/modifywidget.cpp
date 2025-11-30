#include "modifywidget.h"
#include "ui_modifywidget.h"
#include "QDebug"

ModifyWidget::ModifyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifyWidget)
{
    ui->setupUi(this);

}

ModifyWidget::~ModifyWidget()
{
    delete ui;
}

void ModifyWidget::on_returnButton_clicked(){
    emit display(0);
}

void ModifyWidget::on_deleteButton_clicked(){
    QVector<Studentinfo> allStudentInfo;    //数据类型为StudentInfo的QVector容器
        if(ui->idLineEdit->text() == ""){   //如果id输入栏为空则输出错误提示并返回
        QMessageBox::about(NULL, "反馈", "数据文件打开失败");
        return;
        }
        QFile file("student.txt");
            file.open(QIODevice::ReadOnly|QIODevice::Text);
            //以只读 的方式打开文本文件
            if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
                QMessageBox::about(NULL, "反馈", "数据文件打开失败");
                return;
            }
            //QIODevice::Truncate在写入时会从文件开始处写入，覆盖原有内容
            QTextStream inp(&file);
            //以file建立一个QT的文本流
            while(!inp.atEnd()){
                QString name,sex,location,phone,email;
                int id, math, english, languageC,age;
                inp >> name >> id >> math >> english >> languageC>>sex >>location >>email >>phone >>age;
                //读入姓名 学号 数学成绩 英语成绩 C语言成绩
                allStudentInfo.push_back(Studentinfo(name, id, math, english, languageC,sex,location,email,phone,age));
                //调用之前建立的构造函数实例化一个StudentInfo对象并将其加入allStudentInfo
            }
            allStudentInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
            file.close();
            int id = ui->idLineEdit->text().toInt();
            //获取用户输入的id
            bool flag = false;
            //记录是否进行过删除

            for(QVector<Studentinfo>::iterator it = allStudentInfo.begin(); it != allStudentInfo.end();){
                //用迭代器遍历allStudentInfo
                qDebug() << "过了循环1";
                if(it->getId() == id){  //如果找到有id与该id相同的学生，就进行删除
                    it = allStudentInfo.erase(it);
                    flag = true;
                }
                else{
                        ++it;
                }
            }
            qDebug() << "过了循环";
            if(flag){   //如果进行过删除，弹出对话框并更新文件
                QMessageBox::about(NULL, "反馈", "删除成功");
                file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
                //以只写覆盖的方式打开文本文件
                if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
                    QMessageBox::about(NULL, "反馈", "数据文件打开失败");
                    return;
                }
                QTextStream out(&file);
                for(auto i : allStudentInfo){
                    out << i.getName() << " " << i.getId() << " " << i.getMath() << " " << i.getEnglish() << " " << i.getLanguageC()<<" "<<i.getSex()<<" "<<i.getLocation()<< " " <<i.getEmail()<< " "<<i.getphone()<<" "<<i.getAge() << endl;
                }
                file.close();
            }else{
                //如果没有进行删除，弹出不存在对话框
                 QMessageBox::about(NULL, "反馈", "id不存在！");
            }
            //关闭文件
            ui->idLineEdit->clear();
            //清空id输入框
}

void ModifyWidget::on_modifyButton_clicked(){
    if(ui->nameLineEdit->text() == "" || ui->idLineEdit->text() == "" || ui->mathLineEdit->text() == "" || ui->enLineEdit->text() == "" || ui->clineEdit->text() == ""||ui->agelineEdit->text() == ""||ui->sexlineEdit->text() == ""||ui->locationlineEdit->text() == ""||ui->emaillineEdit->text() == ""||ui->phonelineEdit->text() == ""){
            QMessageBox::about(NULL, "反馈", "存在空项");
            return;
        }
        QVector<Studentinfo> allStudentInfo;    //数据类型为StudentInfo的QVector容器
        QFile file("student.txt");
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        //以只读 的方式打开文本文件
        if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
            QMessageBox::about(NULL, "反馈", "数据文件打开失败");
            return;
        }
        //QIODevice::Truncate在写入时会从文件开始处写入，覆盖原有内容
        QTextStream inp(&file);
        //以file建立一个QT的文本流
        while(!inp.atEnd()){
            QString name,sex,location,email,phone;
            int id, math, english, languageC,age;
            inp >> name >> id >> math >> english >> languageC>>sex>>location>>email>>phone>>age;
            //读入姓名 学号 数学成绩 英语成绩 C语言成绩
            allStudentInfo.push_back(Studentinfo(name, id, math, english, languageC,sex,location,email,phone,age));
            //调用之前建立的构造函数实例化一个StudentInfo对象并将其加入allStudentInfo
        }
        allStudentInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
        file.close();
        bool idok1,idok2,idok3,idok4,idok5;
        idok1=true;
        idok2=true;
        idok3=true;
        idok4=true;
        idok5=true;
        int id = ui->idLineEdit->text().toInt(&idok1);
        QString name = ui->nameLineEdit->text();
        int math = ui->mathLineEdit->text().toInt(&idok2);
        int english = ui->enLineEdit->text().toInt(&idok3);
        int languageC = ui->clineEdit->text().toInt(&idok4);
        QString sex = ui->sexlineEdit->text();
        QString location = ui->locationlineEdit->text();
        QString email = ui->emaillineEdit->text();
        QString phone = ui->phonelineEdit->text();
        int age = ui->agelineEdit->text().toInt(&idok5);
        bool flag = false;
        if(ui->nameLineEdit->text() == "" || ui->idLineEdit->text() == "" || ui->mathLineEdit->text() == "" || ui->enLineEdit->text() == "" || ui->clineEdit->text() == ""||ui->agelineEdit->text() == ""||ui->sexlineEdit->text() == ""||ui->locationlineEdit->text() == ""||ui->emaillineEdit->text() == ""||ui->phonelineEdit->text() == ""){
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
            else{
        for(QVector<Studentinfo>::iterator it = allStudentInfo.begin(); it != allStudentInfo.end(); it++){
            if(it->getId() == id){
                it->setName(name);
                it->setMath(math);
                it->setEnglish(english);
                it->setLanguageC(languageC);
                it->setSex(sex);
                it->setLocation(location);
                it->setEmail(email);
                it->setPhone(phone);
                it->setAge(age);
                flag = true;
            }
        }
        if(flag){   //如果进行过修改，弹出对话框并更新文件
            QMessageBox::about(NULL, "反馈", "修改成功");
            file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
            //以只写覆盖的方式打开文本文件
            if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
                QMessageBox::about(NULL, "反馈", "数据文件打开失败");
                return;
            }
            QTextStream out(&file);
            for(auto i : allStudentInfo){
                out << i.getName() << " " << i.getId() << " " << i.getMath() << " " << i.getEnglish() << " " << i.getLanguageC() << " "<<i.getSex()<<" "<<i.getLocation()<< " "<< i.getEmail()<< " "<< i.getphone()<<" "<<i.getAge() << endl;
            }
            file.close();
        }else{
            //如果没有进行修改，弹出不存在对话框
             QMessageBox::about(NULL, "反馈", "id不存在！");
        }
        //关闭文件
        ui->idLineEdit->clear();
        ui->nameLineEdit->clear();
        ui->mathLineEdit->clear();
        ui->enLineEdit->clear();
        ui->clineEdit->clear();
        ui->sexlineEdit->clear();
        ui->locationlineEdit->clear();
        ui->emaillineEdit->clear();
        ui->phonelineEdit->clear();
        ui->agelineEdit->clear();

         }


        //清空所有输入框

}
