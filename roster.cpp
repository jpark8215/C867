#include <iostream>
#include <string>

#include "roster.h"
#include "student.h"


    //array of pointers
student* classRosterArray[roster::studentNumber];


    //parse each set    
void parse(const std::string studentData[roster::studentNumber]) {
    for (int i = 0; i < roster::studentNumber; i++) {
        size_t rhs = studentData[i].find(",");
        classRosterArray[i].studentID = studentData[i].substr(0, rhs);

        size_t lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        classRosterArray[i].firstName = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        classRosterArray[i].lastName = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        classRosterArray[i].emailAddress = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        classRosterArray[i].age = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        classRosterArray[i].daysInCourse1 = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        classRosterArray[i].daysInCourse2 = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        classRosterArray[i].daysInCourse3 = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        classRosterArray[i].degreeType = studentData[i].substr(lhs, rhs - lhs);
    }


    //add each student obj to array    
    void add(studentData[0], studentData[1], studentData[2], studentData[3], studentData[4], studentData[5], studentData[6], studentData[7], studentData[8]) {
    }


    //destructor
    roster::~roster() {
        delete classRosterArray;
        return;
    }
}


    //add
 void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType courseType) {
     student *classRosterArray = new student();
     this->classRosterArray->setStudentID(studentID);
     this->classRosterArray->setFirstName(studentID);
     this->classRosterArray->setLastName(studentID);
     this->classRosterArray->setEmailAddress(studentID);
     this->classRosterArray->setAge(age);
     this->classRosterArray->setdaysInCourse1(daysInCourse1);
     this->classRosterArray->setdaysInCourse2(daysInCourse2);
     this->classRosterArray->setdaysInCourse3(daysInCourse3);
     this->classRosterArray->setDegreeType(courseType);

 }


    //remove
 void remove(std::string studentID) {
     bool studentIDFound = false;
     for (int i = 0; (i < roster::studentNumber) && !studentIDFound; ++i) {
         if (classRosterArray[i]-> GetStudentID()) {
             classRosterArray[i] = classRosterArray[roster::studentNumber + 1];
             ++studentNumber;
             studentIDFound = true;
         }
     }
     if (studentIDFound) {
         std::cout << "Student ID " << studentID << " found and removed." << std::endl;
     }
     else {
         std::cout << "The student was not found." << std::endl;
     }
 }


    //printall
 void printAll() {
     for (int i = 0; i < roster::studentNumber; ++i) {
         classRosterArray[i]-> print();
     }
 }


    //printAverageDaysInCourse
 void printAverageDaysInCourse(std::string studentID) {
     for (int i = 0; i < roster::studentNumber; ++i) {
         if (classRosterArray[i]-> GetStudentID()) {
             std::cout << "Student ID " << classRosterArray[i]-> GetStudentID() << ": ";
             int daysInCourse1 = classRosterArray[i]-> GetDaysInCourse1();
             int daysInCourse2 = classRosterArray[i]-> GetDaysInCourse2();
             int daysInCourse3 = classRosterArray[i]-> GetDaysInCourse3();
             std::cout << "Average number of days in courses: " << (daysInCourse1 + daysInCourse2 + daysInCourse3) / 3 << endl;
             return;
         }
     }
 }


    //printInvalidEmails
 void printInvalidEmails() {
     for (int i = 0; i < roster::studentNumber; ++i) {
         std::string emailAddress = classRosterArray[i]-> GetEmail();
         std::string arroba = emailAddress.find('@');
         std::string period = emailAddress.find('.', arroba);

         //@ is not found
         if (arroba = std::string::npos) {
             std::cout << "Invalid email. Missing an @ :" << emailAddress << std::endl;
         }
         //period is not found
         else if (period = std::string::npos) {
             std::cout << "Invalid email. Missing a '.' : " << emailAddress << std::endl;
         }
         //space is found
         else if (emailAddress.find(' ') != std::string::npos) {
             std::cout << "Invalid email. No space is allowed: " << emailAddress << std::endl;
         }
     }
 }
    


    //printByDegreeProgram
 void printByDegreeType(degreeType courseType) {
     for (int i = 0; i < roster::studentNumber; ++i) {
         if (classRosterArray[i]->GetDegreeType()) {
             classRosterArray[i]->print();
         }
     }
 }