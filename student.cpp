//
// Created by mangolost on 2018/4/5.
//

#include "student.h"
#include <utility>

Student::Student() {
    name="lichen";
    age=30;
}

Student::Student(string name, int age) {
    this->name= std::move(name);
    this->age=age;
}

string Student::getName() {
    return name;
}

/**
 *
 * @param name
 */
void Student::setName(string name) {
    this->name = std::move(name);
}

int Student::getAge() {
    return age;
}

/**
 *
 * @param age
 */
void Student::setAge(int age) {
    this->age = age;
}

bool Student::isChild() {
    return age < 18;
}