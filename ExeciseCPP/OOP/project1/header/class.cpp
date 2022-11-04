#include"class.hpp"

Class::Class(){

}
Class::~Class(){

}

void Class::addStudentInClass(){
    int numStudent ;
    std::cout<< "Input number Student:";
    std::cin >> numStudent ;
    for (int index = 0; index<numStudent; index++){
        std::cout << "Student" << index << " : ";

        int studentID;
        std::cout << "Enter student ID:";
        std::cin >> studentID;
        while(typeid(studentID).name() != "i"){
            std::cout << "Please enter student ID is Integer" << std::endl;
            std::cout << "Enter student ID:";
            std::cin >> studentID;
        }

        std::string studentName;
        std::cout << "Enter student name: ";
        std::cin.ignore();
        std::getline(std::cin, studentName);

        std::vector<int> studentMarks;
        std::cout << "Enter student marks:"<< std::endl;
        std::cout << "Math = ";
        int math = 0;
        std::cin >> math;
        std::cout << "English = ";  
        int english = 0;
        std::cin >> english;
        std::cout << "Physics = ";
        int physics = 0;
        std::cin >> physics;
        studentMarks.push_back(math);
        studentMarks.push_back(english);
        studentMarks.push_back(physics);

        std::string studentGender;
        std::cout << "Enter student gender:";
        std::cin.ignore();
        std::getline(std::cin, studentGender);

        Student student(studentID, studentName, studentMarks, studentGender);
        _students_.push_back(student);
    }
}

void Class::printStudentInfor()
{
    for (int index = 0; index < _students_.size(); index++)
    {
        std::cout << "//----------------------------------------------------------------//" << std::endl;
        std::cout << "students ["<<index<<"]    |" << std::endl;
        std::cout << "ID: " <<_students_[index].getID() << std::endl;
        std::cout << "Name: " <<_students_[index].getName() << std::endl;
        std::cout << "Marks: [Math = " << _students_[index].getMarks()[0] <<",";
        std::cout << " English = " << _students_[index].getMarks()[1] <<",";
        std::cout << " Physic = " << _students_[index].getMarks()[2] <<"]" << std::endl;
        std::cout << "Gender: " << _students_[index].getGender() << std::endl;
    }
}