#ifndef __STUDENT__HPP__
#define __STUDENT__HPP__    

#include <string>
#include <vector>
#include <map>
#include <iostream>

class Student{
    private:
        int ID;
        std::string name;
        std::vector<int> marks;
        std::string gender;
    public:
        Student();
        ~Student();
        Student(int stdID, std::string stdName, std::vector<int> stdMarks, std::string stdGender);
        int getID();
        std::string getName();
        std::vector<int> getMarks();
        std::string getGender();
        

};

#endif