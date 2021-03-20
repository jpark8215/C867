#include <iostream>
#include <string>

#include "student.h"

student::student() {

}
    //constructor using parameters
student::student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse[], degreeType courseType) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
    this->emailAddress = emailAddress;
    for (int i = 0; i < 3; ++i)
        this->daysInCourse[i] = daysInCourse[i];
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
degreeType student::getDegreeType() {
    return courseType;
}


void student::print() {
    std::cout << studentID << "\t"
        << "First Name: " << firstName << "\t"
        << "Last Name: " << lastName << "\t"
        << "Age: " << age << "\t"
        << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << "\t"
        << "Degree Program: " << degreeTypeStrings[courseType];
};