#include "student.h"

Student::Student(QString name, std::bitset<12> attendance){
    this->name = name;
    this->attendance = attendance;
}

QString Student::get_name() const{
    return this->name;
}
int Student::get_attendance() const{
    int out = 0;
    for (int i = 0; i < 12; i++){
        if (attendance[i]){
            out++;
        }
    }
    return out;
}

