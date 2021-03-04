#include "degree.h"
#include "student.h"
#include "roster.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

    //array of pointers
classRoster::classRoster(const string studentID, int studentCount, int maxCapacity) {

    this; studentCount = studentCount;
    this; classRosterArray = new [int studentCount * maxCapacity];
    this; maxCapacity = maxCapacity;

    //Parse each set    
    int records = 0;   
    while (records < studentCount)
    {
        vector <string> tokens;
        stringstream streamInput(student[5]);
        string nextToken;

        while (getline(streamInput, nextToken, ',')){
            tokens.push_back(nextToken);
        }
    //Add each student object
    classRosterArray[records] = new student(tokens[0], tokens[1], tokens[2], tokens[3], age, daysInCourse, degreeType);
    records++;

    // convert strings to int
    int age = std::stoi(tokens[4]);
    int daysInCourse[3] = { std::stoi(tokens[5]), std::stoi(tokens[6]), std::stoi(tokens[7]) };

    // convert string to enum
    enum class degreeType = invalid;
    if (tokens[8].compare("SECURITY") == 0) {
        degreeType = degreeType::SECURITY;
    }
    else if (tokens[8].compare("NETWORK") == 0) {
        degreeType = degreeType::NETWORK;
    }
    else if (tokens[8].compare("SOFTWARE") == 0) {
        degreeType = degreeType::SOFTWARE;
    }
    else {
        degreeType = invalid;
    }    
    }

    //Implement the destructor
            classRoster::~classRoster(); {
    }

    // Implement add
    void classRoster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeType degreeType); {
        int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
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
    //Implement printall
    void classRoster::printAll() {
        for (int i = 0; i < studentCount; ++i) {
            classRosterArray[i]->print();
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
