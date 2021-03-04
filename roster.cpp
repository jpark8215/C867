#include "degree.h"
#include "student.h"
#include "roster.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    //array of pointers
    student* classRosterArray[5];

    //Parse each set    
    int records = 0;
    while (

    //Add each student object
    classRosterArray[] = new student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeType);
    studentCount++;
    

    // convert strings to int
    

    // convert string to enum
    degreeType roster::convert(string str){ 
        if (str == "SECURITY") return SECURITY;
        else if (str == "NETWORK") return NETWORK;
        else if (str == "SOFTWARE") return SOFTWARE;
        else return NONE;
    }
 }

    //Implement the destructor
    classRoster::~classRoster();

    // Implement add
    void classRoster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeType); {
        classRosterArray[studentCount] = new student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeType);
        studentCount++;
    }
    // Implement remove
    void classRoster::remove(string studentID) {
        bool studentIDFound = false;
        for (int i = 0; (i < studentCount) && !studentIDFound; ++i) {
            if (classRosterArray[i] -> GetStudentID() == studentID) 
            {
                classRosterArray[i] = classRosterArray[studentCount - 1];
                --studentCount;
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
    void classRoster::printAll() {
        for (int i = 0; i < studentCount; ++i) {
            classRosterArray[i] -> print();
        }
    }
    //Implement printAverageDaysInCourse
    void classRoster::printAverageDaysInCourse(string studentID) {
        for (int i = 0; i < studentCount; ++i) {
            if (classRosterArray[i]->GetStudentID() == studentID) {
                cout << "Student ID " << classRosterArray[i]->GetStudentID() << ": ";
                int* days = classRosterArray[i]->GetDaystoComplete();
                cout << "Average number of days in courses: " << (days[0] + days[1] + days[2]) / 3 << endl;
                return;
            }
        }
    }
    //Implement printInvalidEmails
    void classRoster::printInvalidEmails() {
        for (int i = 0; i < studentCount; ++i)
        {
            string emailAddress = classRosterArray[i]->GetEmail();
            u_long arroba = emailAddress.find('@');
            u_long period = emailAddress.find('.', arroba);

            // if @ is not found
            if (arroba == string::npos)
            {
                cout << "Invalid email. Missing an @ symbol:" << emailAddress << endl;
            }
            // if period is not found
            else if (period == string::npos)
            {
                cout << "Invalid email. Missing a '.' : " << emailAddress << endl;
            }
            // if a space is found
            else if (emailAddress.find(' ') != string::npos)
            {
                cout << "Invalid email. Spaces are not allowed in emails: " << emailAddress << endl;
            }
        }
    }
    //Implement printByDegreeProgram
    void classRoster::printByDegreeType(degreeType degreeType) {
        for (int i = 0; i < studentCount; ++i) {
            if (classRosterArray[i]->GetDegreeProgram() == degreeType) {
                classRosterArray[i]->print();
            }
        }
    }
