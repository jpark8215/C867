#include <iostream>
#include <string>

#include "student.h"

student::student() {

}
    //constructor using parameters
student::student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse[], degreeType courseType) {
//student::student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int* daysInCourse, degreeType courseType) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
    this->emailAddress = emailAddress;
    daysInCourse = daysInCourse;
    
  /*  this->daysInCourse1 = daysInCourse1;
    this->daysInCourse2 = daysInCourse2;
    this->daysInCourse3 = daysInCourse3;*/
    this->courseType = courseType;
}

student::~student() {

}

void student::setStudentID(std::string studentID) {
    this->studentID = studentID;
}
void student::setFirstName(std::string firstName) {
    this->firstName = firstName;
}
void student::setLastName(std::string lastName) {
    this->lastName = lastName;
}
void student::setEmailAddress(std::string emailAddress) {
    this->emailAddress = emailAddress;
}
void student::setAge(int age) {
    this->age = age;
}
void student::setDaysInCourse(int daysInCourse[]) {
    for (int i = 0; i < 3; i++) {
        this->daysInCourse[i] = daysInCourse[i];
    }
}
//void student::setDaysInCourse1(int daysInCourse1) {
//    this->daysInCourse1 = daysInCourse1;
//}
//void student::setDaysInCourse2(int daysInCourse2) {
//    this->daysInCourse2 = daysInCourse2;
//}
//void student::setDaysInCourse3(int daysInCourse3) {
//    this->daysInCourse3 = daysInCourse3;
//}
void student::setDegreeType(degreeType courseType) {
    courseType;
}


std::string student::getStudentID() {
    return studentID;
}
std::string student::getFirstName() {
    return firstName;
}
std::string student::getLastName() {
    return lastName;
}
std::string student::getEmailAddress() {
    return emailAddress;
}
int student::getAge() {
    return age;
}
int *student::getDaysInCourse() {
    return daysInCourse;
}
//int student::getDaysInCourse1() {
//    return daysInCourse1;
//}
//int student::getDaysInCourse2() {
//    return daysInCourse2;
//}
//int student::getDaysInCourse3() {
//    return daysInCourse3;
//}
degreeType student::getDegreeType() {
    return courseType;
}


void student::print() {
    std::cout << studentID << "\t"
        << "First Name: " << firstName << "\t"
        << "Last Name: " << lastName << "\t"
        << "Age: " << age << "\t"
        << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << "\t"
        //<< "daysInCourse: {" << daysInCourse1 << ", " << daysInCourse2 << ", " << daysInCourse3 << "}" << "\t"
        << "Degree Program: " << degreeTypeStrings[courseType];
};


//D.For the Student class, do the following :
//1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables :
//•  student ID
//•  first name
//•   last name
//•  email address
//•  age
//•  array of number of days to complete each course
//•  degree program
//2.  Create each of the following functions in the Student class :
//    a.an accessor(i.e., getter) for each instance variable from part D1
//    b.a mutator(i.e., setter) for each instance variable from part D1
//    c.All external accessand changes to any instance variables of the Student class must be done using accessorand mutator functions.
//    d.constructor using all of the input parameters provided in the table
//    e.print() to print specific student data
