#include "degree.h"
#include "student.h"

#include <iostream>

using namespace std;

int main() {

    student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], degreeType degreeType) {
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
        this->emailAddress = emailAddress;
        this->daysInCourse = int daysInCourse[];
        for (int i = 0; i < 3; i++) {
            this->daysInCourse[i] = daysInCourses[i];
        }
        this->degreeType = degreeType;
    }

    string student::getStudentID() const {
        return studentID;
    }
    string student::getFirstName() const {
        return firstName;
    }
    string student::getLastName() const {
        return lastName;
    }
    string student::getEmailAddress() const {
        return emailAddress;
    }
    int student::getAge() const {
        return age;
    }
    int* student::getDaysInCourse() {
        return daysInCourse;
    }
    degreeType student::getDegreeType() const {
        return degreeType;
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
    void student::setDaysInCourse(int daysInCourse[]) {
        for (int i = 0; i < 3; i++) {
            this->daysInCourse[i] = daysInCourse[i];
        }
    }
    void student::setDegreeType(DegreeType degreeType) {
        this->degreeType = degreeType;
    }
}

void student::print() {
    cout << studentID << "\t"
    << "First Name: " << firstName << "\t"
    << "Last Name: " << lastName << "\t"
    << "Age: " << age << "\t"
    << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << "\t"
    << "Degree Program: " << degreeTypeStrings[getDegreeType()];
}

