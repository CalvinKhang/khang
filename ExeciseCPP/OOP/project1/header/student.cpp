#include"student.hpp"

Student::Student(){

}

Student::~Student(){

}
Student::Student(int stdID, std::string stdName, std::vector<int> stdMarks, std::string stdGender){
    ID = stdID;
    name = stdName;
    marks = stdMarks;
    gender = stdGender;
}
int Student::getID(){
    return ID;
}
std::string Student::getName(){
    return name;
}
std::vector<int> Student::getMarks(){
    return marks;
}
std::string Student::getGender(){
    return gender;
}