#include "degree.h"
#include "student.h"

#include <iostream>

using namespace std;

    //constructor using parameters
 student::student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], degreeType degreeType) {
          this->studentID = studentID;
          this->firstName = firstName;
          this->lastName = lastName;
          this->age = age;
          this->emailAddress = emailAddress;
            for (int i = 0; i < 3; i++) {
                this->daysInCourse[i] = daysInCourse[i];
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
    void student::setDaysInCourse(int* daysInCourse[]) {
        for (int i = 0; i < 3; i++) {
            this->daysInCourse[i] = daysInCourse[i];
        }
    }
    void setDegreeType(enum class degreeType) {
        this->degreeType = degreeType;
    }


    string getStudentID() const {
        return studentID;
    }
    string getFirstName() const {
        return firstName;
    }
    string getLastName() const {
        return lastName;
    }
    string getEmailAddress() const {
        return emailAddress;
    }
    int getAge() const {
        return age;
    }
    int* getDaysInCourse() {
        return daysInCourse;
    }
    enum class degreeType getDegreeType() {
        return degreeType;
    }


    void print() {
        cout << studentID << "\t"
            << "First Name: " << firstName << "\t"
            << "Last Name: " << lastName << "\t"
            << "Age: " << age << "\t"
            << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << "\t"
            << "Degree Program: " << degreeTypeStrings[getDegreeType()];
    }
}