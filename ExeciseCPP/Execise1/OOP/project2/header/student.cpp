#include "student.hpp"

Student::Student():Person::Person(int p_ID, std::string p_name ; int p_age, std::string p_gender){
    s_ID = p_ID;
    s_name = p_name;
    s_age = p_age;
    s_gender = p_gender;
}

Student::getName(){
    return s_name;
}
int Student::getStudenID(){
    return s_ID;
}
