#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include <QString>

class Studentinfo
{
private:
    QString name,sex,location,email,phone;
    int id,age,math,english,languageC;
    double avg;
public:
    Studentinfo();
    Studentinfo(QString tname, int tid, int tmath, int tenglish, int tlanguageC,QString tsex,QString tlocation,QString temail,QString tphone,int tage){
        name = tname;
        id = tid;
        math = tmath;
        english = tenglish;
        languageC = tlanguageC;
        avg = (tmath + tenglish  + tlanguageC) / 3.0;
        sex=tsex;
        location=tlocation;
        email=temail;
        age=tage;
        phone=tphone;
    }

    int getId(){
        return id;
    }

    QString getName(){
        return name;
    }

    int getMath(){
        return math;
    }

    int getEnglish(){
        return english;
    }
    int getLanguageC(){
        return languageC;
    }

    double getAvg(){
        return avg;
    }

    QString getSex(){
        return sex;
    }

    QString getLocation(){
        return location;
    }

    QString getEmail(){
        return email;
    }

    QString getphone(){
        return phone;
    }

    int getAge(){
        return age;
    }

        void setId(int tid){
            id = tid;
        }
        void setName(QString tname){
            name = tname;
        }
        void setMath(int tmath){
            math = tmath;
            avg = (math + english + languageC) / 3.0;
        }
        void setEnglish(int tenglish){
            english = tenglish;
            avg = (math + english + languageC) / 3.0;
        }
        void setLanguageC(int tlanguageC){
            languageC = tlanguageC;
            avg = (math + english + languageC) / 3.0;
        }
        void setSex(QString tsex){
            sex = tsex;

        }
        void setLocation(QString tlocation){
            location = tlocation;
        }

        void setAge(int tage){
            age = tage;
        }

        void setEmail(QString temail){
            email = temail;
        }

        void setPhone(QString tphone){
            phone = tphone;
        }
};

#endif // STUDENTINFO_H
