#include "degree.h"
#include "student.h"

#include <iostream>

using namespace std;


 student::student(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse[], degreeType degreeType) {
          this->studentID = studentID;
          this->firstName = firstName;
          this->lastName = lastName;
          this->age = age;
          this->emailAddress = emailAddress;
            for (int i = 0; i < 3; i++) {
                this->daysInCourse[i] = daysInCourses[i];
            }
          this->degreeType = degreeType;
        }
  
 student::~student() {
 }

    void setStudentID(string studentID) {
        this->studentID = studentID;
    }
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }
    void setLastName(string lastName) {
        this->lastName = lastName;
    }
    void setEmailAddress(string emailAddress) {
        this->emailAddress = emailAddress;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setDaysInCourse(int daysInCourse[]) {
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