#ifndef __PERSON__HPP__
#define __PERSON__HPP__

#include<iostream>
#include<string>
#include<vector>

class Person{
    private:
        int ID;
        std::string name;
        int age;
        std::string gender;
    public:
        Person(int ID, std::string name, int age, std::string gender){
        virtual int getID()= 0;
        virtual std::string getName() = "";
        virtual int getAge() = 0;
        virtual std::string getGender() = "";

}




#endif