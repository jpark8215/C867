#include <iostream>
#include <string>

#include "degree.h"
#include "student.h"

class student {

private:

    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    int age;
    int* daysInCourse;
    degreeType degreeType;

public:
    //constructor using parameters
    student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse, enum degreeType) {
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


    void setStudentID(std::string studentID) {
        this->studentID = studentID;
    }
    void setFirstName(std::string firstName) {
        this->firstName = firstName;
    }
    void setLastName(std::string lastName) {
        this->lastName = lastName;
    }
    void setEmailAddress(std::string emailAddress) {
        this->emailAddress = emailAddress;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setDaysInCourse(int daysInCourse) {
        for (int i = 0; i < 3; i++) {
            this->daysInCourse[i] = daysInCourse;
        }
    }
    void setDegreeType(enum degreeType) {
        enum class degreeType;
    }


    std::string getStudentID() {
        return studentID;
    }
    std::string getFirstName() {
        return firstName;
    }
    std::string getLastName() {
        return lastName;
    }
    std::string getEmailAddress() {
        return emailAddress;
    }
    int getAge() {
        return age;
    }
    int* getDaysInCourse() {
        return daysInCourse;
    }
    enum degreeType getDegreeType() {
        return;
    }


    void print() {
        std::cout << studentID << "\t"
            << "First Name: " << firstName << "\t"
            << "Last Name: " << lastName << "\t"
            << "Age: " << age << "\t"
            << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << "\t"
            << "Degree Program: " << degreeTypeStrings;
    };

    ~student();
};