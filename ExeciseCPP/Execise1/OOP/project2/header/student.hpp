#ifndef __STUDENT_HPP__
#define __STUDENT_HPP__

#include"person.hpp"

class Student: public Person
{
    private:
        std::vector<double> s_marks;
    public:
        Student(int ID) : Person(ID, nam, age, gender);
        ~Student();
        std::string getName();
        int getAge();
        int getStudenID();
        std::vector<double> getMark();
        double average();
}
#endif