//
// Created by mangolost on 2018/4/5.
//

#ifndef UNTITLED2_STUDENT_H
#define UNTITLED2_STUDENT_H

#include <string>
using namespace std;

class Student {
    private:
        string name;//姓名
        int age;//年龄
    public:
        Student();//构造函数
        Student(string name, int age);//构造函数

        string getName();
        void setName(string name);

        int getAge();
        void setAge(int age);

        bool isChild();//是否未成年人
};

#endif //UNTITLED2_STUDENT_H

