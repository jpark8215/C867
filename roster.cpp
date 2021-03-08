#include "degree.h"
#include "student.h"
#include "roster.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

roster::roster(const string studentData[], int studentNumber, int parameter) {
    
    //array of pointers
    const int studentNumber = 5;
    vector<roster*> classRoster;
    for (int i = 0; i < studentNumber; ++i) {
        roster.push_back(new roster());
    }


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


        //add each student obj to array    
roster[classRoster] = new student(parameter[0], parameter[1], parameter[2], tokens[3], age, daysInCourse, degreeType);
classRoster++;

int age = stoi(parameter[4]);
int daysInCourse[] = { stoi(parameter[5]), stoi(parameter[6]), stoi(parameter[7]) };

degreeType roster::convert(string str) {
      if (str == "SECURITY") return SECURITY;
      else if (str == "NETWORK") return NETWORK;
      else if (str == "SOFTWARE") return SOFTWARE;
      else return NONE;
      }



    //destructor
roster::~roster() {
}


    //add
 void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse[], degreeType); {
     roster[studentNumber] = new student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeType);
     studentNumber++;
    }


    //remove
void roster::remove(string studentID) {
     bool studentIDFound = false;
     for (int i = 0; (i < studentNumber) && !studentIDFound; ++i) {
         if (roster[i]->GetStudentID() == studentID) {
             roster[i] = roster[studentNumber - 1];
             --studentNumber;
             studentIDFound = true;
         }
     }
     if (studentIDFound) {
            cout << "Student ID " << studentID << " found and removed." << endl;
     }
     else {
            cout << "Error: student with this ID not found." << endl;
     }
}


    //printall
void roster::printAll() {
     for (int i = 0; i < studentNumber; ++i) {
            roster[i]->print();
     }
}


    //printAverageDaysInCourse
void roster::printAverageDaysInCourse(string studentID) {
     for (int i = 0; i < studentNumber; ++i) {
         if (roster[i]->GetStudentID() = studentID) {
                cout << "Student ID " << roster[i]->GetStudentID() << ": ";
                int* daysInCourse = roster[i]->GetDaysInCourse();
                cout << "Average number of days in courses: " << (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3 << endl;
                return;
         }
     }
}


    //printInvalidEmails
void roster::printInvalidEmails() {
     for (int i = 0; i < studentNumber; ++i) {
         string emailAddress = roster[i]->GetEmail();
         string arroba = emailAddress.find('@');
         string period = emailAddress.find('.', arroba);

    //@ is not found
         if (arroba = string::npos) {
         cout << "Invalid email. Missing an @ symbol:" << emailAddress << endl;
         }
    //period is not found
         else if (period = string::npos) {
         cout << "Invalid email. Missing a '.' : " << emailAddress << endl;
         }
    //space is found
         else if (emailAddress.find(' ') != string::npos) {
         cout << "Invalid email. Spaces are not allowed in emails: " << emailAddress << endl;
         }
     }
}


    //printByDegreeProgram
void roster::printByDegreeType(degreeType degreeType) {
     for (int i = 0; i < studentNumber; ++i) {
         if (students[i]->GetDegreeType() == degreeType) {
                students[i]->print();
         }
     }
}