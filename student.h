#ifndef STUDENT_H
#define STUDENT_H
#include <bitset>
#include <QString>

class Student
{
private:
    std::bitset<12> attendance;
    QString name;
public:
    Student(QString name, std::bitset<12> attendance);
    QString get_name() const;
    int get_attendance() const;
    void set_attendance(int day){
        this->attendance[day] = true;
    }
};


#endif // STUDENT_H
