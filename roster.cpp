#include "degree.h"
#include "student.h"
#include "roster.h"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


roster::roster(int maxCapacity, int studentNumber, student** students); {
        this->maxCapacity = maxCapacity;
        this->studentnumber = studentNumber;
        this->students = new student * studentNumber;
    }

    //Parse each set    
int records = 0;


void while (records < student) {
     vector <string> tokens;
     stringstream streamInput(studentData[records]);
     string nextToken;
     while (getline(streamInput, nextToken, ',')) {
            tokens.push_back(nextToken);
        }


        // convert strings to int
 int daysInCourse[3] = { std::stoi(tokens[5]), std::stoi(tokens[6]), std::stoi(tokens[7]) };
 int age = std::stoi(tokens[4]);


        // convert string to enum
 degreeType roster::convert(string str) {
      if (str == "SECURITY") return SECURITY;
      else if (str == "NETWORK") return NETWORK;
      else if (str == "SOFTWARE") return SOFTWARE;
      else return NONE;
        }
      return 0;
    }


    //Implement the destructor
roster::~roster() {
    for (int i = 0; i < studentNumber; i++) {
        delete this->students[i];
    }
    delete this;
}


    // Implement add
void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse[], degreeType); {
     students[studentNumber] = new student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeType);
     studentNumber++;
    }


    // Implement remove
void roster::remove(string studentID) {
     bool studentIDFound = false;
     for (int i = 0; (i < studentNumber) && !studentIDFound; ++i) {
         if (students[i]->GetStudentID() == studentID) {
             students[i] = students[studentNumber - 1];
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


    // Implement printall
void roster::printAll() {
     for (int i = 0; i < studentNumber; ++i) {
            students[i]->print();
     }
}


    //Implement printAverageDaysInCourse
void roster::printAverageDaysInCourse(string studentID) {
     for (int i = 0; i < studentNumber; ++i) {
         if (students[i]->GetStudentID() == studentID) {
                cout << "Student ID " << students[i]->GetStudentID() << ": ";
                int* daysInCourse = students[i]->GetDaysInCourse();
                cout << "Average number of days in courses: " << (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3 << endl;
                return;
         }
     }
}


    //Implement printInvalidEmails
void roster::printInvalidEmails() {
     for (int i = 0; i < studentCount; ++i) {
         string emailAddress = rosterArray[i]->GetEmail();
         u_long arroba = emailAddress.find('@');
         u_long period = emailAddress.find('.', arroba);

    // if @ is not found
         if (arroba == string::npos) {
         cout << "Invalid email. Missing an @ symbol:" << emailAddress << endl;
         }
    // if period is not found
         else if (period == string::npos) {
         cout << "Invalid email. Missing a '.' : " << emailAddress << endl;
         }
    // if a space is found
         else if (emailAddress.find(' ') != string::npos) {
         cout << "Invalid email. Spaces are not allowed in emails: " << emailAddress << endl;
         }
     }
}


    //Implement printByDegreeProgram
void roster::printByDegreeType(degreeType degreeType) {
     for (int i = 0; i < studentNumber; ++i) {
         if (students[i]->GetDegreeType() == degreeType) {
                students[i]->print();
         }
     }
}