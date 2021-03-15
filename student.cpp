#include <iostream>
#include <string>

#include "degree.h"
#include "student.h"


    //constructor using parameters
student::student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType courseType) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
    this->emailAddress = emailAddress;
    this->daysInCourse1 = daysInCourse1;
    this->daysInCourse2 = daysInCourse2;
    this->daysInCourse3 = daysInCourse3;
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
void student::setDaysInCourse1(int daysInCourse1) {
    this->daysInCourse1 = daysInCourse1;
}
void student::setDaysInCourse2(int daysInCourse2) {
    this->daysInCourse2 = daysInCourse2;
}
void student::setDaysInCourse3(int daysInCourse3) {
    this->daysInCourse3 = daysInCourse3;
}
void student::setDegreeType(degreeType courseType) {
    degreeType courseType = courseType;
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
int student::getDaysInCourse1() {
    return daysInCourse1;
}
int student::getDaysInCourse2() {
    return daysInCourse2;
}
int student::getDaysInCourse3() {
    return daysInCourse3;
}
degreeType student::getDegreeType() {
    return courseType;
}


void student::print() {
    std::cout << studentID << "\t"
        << "First Name: " << firstName << "\t"
        << "Last Name: " << lastName << "\t"
        << "Age: " << age << "\t"
        << "daysInCourse: {" << daysInCourse1 << ", " << daysInCourse2 << ", " << daysInCourse3 << "}" << "\t"
        << "Degree Program: " << courseType;
};
