#include <iostream>

#include "degree.h"
#include "student.h"

using namespace std;

    //constructor using parameters
student::student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse, enum degreeType) {
          this->studentID = studentID;
          this->firstName = firstName;
          this->lastName = lastName;
          this->age = age;
          this->emailAddress = emailAddress;
          for (int i = 0; i < 3; i++) {
              this->daysInCourse[i] = daysInCourse;
          }
          this->degreeType = degreeType;
        }
  
 student::~student() {
 }

    void student::setStudentID(string studentID) {
        this->studentID = studentID;
    }
    void student::setFirstName(string firstName) {
        this->firstName = firstName;
    }
    void student::setLastName(string lastName) {
        this->lastName = lastName;
    }
    void student::setEmailAddress(string emailAddress) {
        this->emailAddress = emailAddress;
    }
    void student::setAge(int age) {
        this->age = age;
    }
    void student::setDaysInCourse(int *daysInCourse) {
        for (int i = 0; i < 3; i++) {
            this->daysInCourse[i] = daysInCourse;
        }
    }
    void setDegreeType(enum degreeType) {
        enum class degreeType;
    }


    string student::getStudentID() {
        return studentID;
    }
    string student::getFirstName() {
        return firstName;
    }
    string student::getLastName() {
        return lastName;
    }
    string student::getEmailAddress() {
        return emailAddress;
    }
    int student::getAge() {
        return age;
    }
    int* student::getDaysInCourse() {
        return daysInCourse;
    }
    enum degreeType getDegreeType() {
        return;
    }


    void student::print() {
        cout << studentID << "\t"
            << "First Name: " << firstName << "\t"
            << "Last Name: " << lastName << "\t"
            << "Age: " << age << "\t"
            << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << "\t"
            << "Degree Program: " << degreeTypeStrings[getDegreeType()];
    }