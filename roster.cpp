#include <iostream>
#include <string>
#include <vector>

#include "degree.h"
#include "student.h"
#include "roster.h"

using namespace std;

    //array of pointers
roster::roster(int studentNumber, student* classRoster) {
    this->studentNumber = studentNumber;
    this->classRoster = new student(studentData[]);
   

    //parse each set    
    for (int i = 0; i < studentNumber; i++) {
        size_t rhs = studentData[i].find(",");
        studentData[i].studentID = student[i].substr(0, rhs);

        size_t lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        studentData[i].firstName = student[i].substr(0, lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        studentData[i].lastName = student[i].substr(0, lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        studentData[i].emailAddress = student[i].substr(0, lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        studentData[i].age = student[i].substr(0, lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        studentData[i].daysInCourse[0] = student[i].substr(0, lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        studentData[i].daysInCourse[1] = student[i].substr(0, lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        studentData[i].daysInCourse[2] = student[i].substr(0, lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        studentData[i].degreeType = student[i].substr(0, lhs, rhs - lhs);
    }
}

    //destructor
roster::~roster() {
    delete classRoster;

}


    //add each student obj to array    
roster::classRoster = new student(string studentID, string firstName, string lastName, string emailAddress, int age, int *daysInCourse, enum degreeType) {
        for (int i = 0; i < 5; ++i) {
    classRoster[i - 1] = new student();
        }
}


    //add
void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int *daysInCourse, degreeType) {
    this->classRoster = new student;
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


    //remove
void roster::remove(string studentID) {
     bool studentIDFound = false;
     for (int i = 0; (i < studentNumber) && !studentIDFound; ++i) {
         if (classRoster[i] -> GetStudentID()) {
             classRoster[i] = classRoster[studentNumber + 1];
             ++studentNumber;
             studentIDFound = true;
         }
     }
     if (studentIDFound) {
            cout << "Student ID " << studentID << " found and removed." << endl;
     }
     else {
            cout << "The student was not found." << endl;
     }
}


    //printall
void roster::printAll() {
     for (int i = 0; i < studentNumber; ++i) {
            classRoster[i]-> print();
     }
}


    //printAverageDaysInCourse
void roster::printAverageDaysInCourse(string studentID) {
     for (int i = 0; i < studentNumber; ++i) {
         if (classRoster[i]-> GetStudentID()) {
                cout << "Student ID " << classRoster[i]-> GetStudentID() << ": ";
                int* daysInCourse[] = classRoster[i]-> GetDaysInCourse[]();
                cout << "Average number of days in courses: " << (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3 << endl;
                return;
         }
     }
}


    //printInvalidEmails
void roster::printInvalidEmails() {
     for (int i = 0; i < studentNumber; ++i) {
         string emailAddress = classRoster[i]-> GetEmail();
         string arroba = emailAddress.find('@');
         string period = emailAddress.find('.', arroba);

    //@ is not found
         if (arroba = string::npos) {
         cout << "Invalid email. Missing an @ :" << emailAddress << endl;
         }
    //period is not found
         else if (period = string::npos) {
         cout << "Invalid email. Missing a '.' : " << emailAddress << endl;
         }
    //space is found
         else if (emailAddress.find(' ') != string::npos) {
         cout << "Invalid email. No space is allowed: " << emailAddress << endl;
         }
     }
}


    //printByDegreeProgram
void roster::printByDegreeType(degreeType degreeType) {
     for (int i = 0; i < studentNumber; ++i) {
         if (classRoster[i]-> GetDegreeType()) {
             classRoster[i]-> print();
         }
     }
}