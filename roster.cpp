#include <iostream>
#include <string>

#include "roster.h"

roster::roster() {

}

//parse each set    
void roster::parse(const std::string studentData[roster::studentNumber]) {
    for (int i = 0; i < roster::studentNumber; i++) {
        size_t rhs = studentData[i].find(",");
        std::string s1 = studentData[i].substr(0, rhs);

        size_t lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        std::string s2 = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        std::string s3 = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        std::string s4 = studentData[i].substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int s5 = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int s6 = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int s7 = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        int s8 = stoi(studentData[i].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[i].find(",", lhs);
        std::string s9 = studentData[i].substr(lhs, rhs - lhs);


        degreeType courseType = SECURITY;
        if (s9 == "SECURITY") {
            courseType = SECURITY;
        }
        else if (s9 == "NETWORK") {
            courseType = NETWORK;
        }
        else {
            courseType = SOFTWARE;
        }

        add(s1, s2, s3, s4, s5, s6, s7, s8, courseType);
    }
}

    //add
 void roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType courseType) {
     int courseDays[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
     student* s= new student(studentID, firstName, lastName, emailAddress, age, courseDays, courseType);
     classRosterArray[roster::index++] = s;
 }

    //remove
 void roster::remove(std::string studentID) {
     int idmatch = 0;
     for (int i = 0; i < roster::studentNumber; ++i) {
             if (classRosterArray[i]->getStudentID() == studentID) {
                 idmatch = 1;
                 classRosterArray[i]->setStudentID("invalid");
             }
         }
     if (!idmatch) {
         std::cout << "The studentID was not found." << std::endl;
     }
 }

    //printall
 void roster::printAll() {
     for (int i = 0; i < roster::studentNumber; ++i) {
         if (classRosterArray[i]->getStudentID() != "invalid") {
             classRosterArray[i]->print();
             std::cout << std::endl;
         }
     }
 }

    //printAverageDaysInCourse
 void roster::printAverageDaysInCourse(std::string studentID) {
     for (int i = 0; i < roster::studentNumber; ++i) {
         if (classRosterArray[i]->getStudentID() == studentID) {
             std::cout << "StudentID " << classRosterArray[i]->getStudentID() << ": ";
             int *daysInCourse = classRosterArray[i]->getDaysInCourse();
             std::cout << "Average number of days in the three courses: " << (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3 << std::endl;
         }
     }
 }

    //printInvalidEmails
 void roster::printInvalidEmails() {
     for (int i = 0; i < roster::studentNumber; ++i) {
         std::string emailAddress = classRosterArray[i]->getEmailAddress();

         if (emailAddress.find("@") == -1) {
             std::cout << "Invalid email. Missing an @  :" << emailAddress << std::endl;
         }
         else if (emailAddress.find(".") == -1) {
             std::cout << "Invalid email. Missing a '.' : " << emailAddress << std::endl;
         }
         else if (emailAddress.find(" ") != std::string::npos) {
             std::cout << "Invalid email. No space is allowed: " << emailAddress << std::endl;
         }
     }
 }
  
    //printByDegreeProgram
 void roster::printByDegreeType(degreeType courseType) {
     for (int i = 0; i < roster::studentNumber; ++i) {
         if (classRosterArray[i]->getDegreeType() == courseType) {
             classRosterArray[i]->print();
         }
     }
 }

 roster::~roster() {

 }