#ifndef __CLASS__HPP__
#define __CLASS__HPP__

#include"student.hpp"

class Class : public Student
{
    private:
    std::vector<Student> _students_;
    public:
        Class();
        ~Class();
        void addStudentInClass();
        void printStudentInfor();
};

#endif