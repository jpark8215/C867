#include "degree.h"
#include "student.h"
#include "roster.h"

#include <iostream>
#include <string>


using namespace std;

int main(){
    //array of pointers
    student* rosterArray[5];
    roster (string studentID, int studentCount, student* students) {
        this->studentID = studentID;
        this->studentCount = 
        this->student
    }

    //Parse each set    
    void roster::parseDataAndAdd(string rawData) { 
        vector<string> dataPoints; 
        stringstream inputSStream(rawData); 

        while (inputSStream.good()) { 
            string data;
            getline(inputSStream, data, ',');
            dataPoints.push_back(data);
        }
        //Add each student object
        add(dataPoints.at(0),
            dataPoints.at(1),
            dataPoints.at(2),
            dataPoints.at(3),
            stoi(dataPoints.at(4)),
            stoi(dataPoints.at(5)),
            stoi(dataPoints.at(6)),
            stoi(dataPoints.at(7)),
            convert(dataPoints.at(8))
        );
    }
   

    // convert strings to int
    

    // convert string to enum
    degreeType roster::convert(string str){ 
        if (str == "SECURITY") return SECURITY;
        else if (str == "NETWORK") return NETWORK;
        else if (str == "SOFTWARE") return SOFTWARE;
        else return NONE;
    }
    return 0;
 }

    //Implement the destructor
    roster::~roster();

    // Implement add
    void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], degreeType); {
        rosterArray[studentCount] = new student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeType);
        studentCount++;
    }
    // Implement remove
    void roster::remove(string studentID) {
        bool studentIDFound = false;
        for (int i = 0; (i < studentCount) && !studentIDFound; ++i) {
            if (rosterArray[i] -> GetStudentID() == studentID) 
            {
                rosterArray[i] = rosterArray[studentCount - 1];
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
    void roster::printAll() {
        for (int i = 0; i < studentCount; ++i) {
            rosterArray[i] -> print();
        }
    }
    //Implement printAverageDaysInCourse
    void roster::printAverageDaysInCourse(string studentID) {
        for (int i = 0; i < studentCount; ++i) {
            if (rosterArray[i]->GetStudentID() == studentID) {
                cout << "Student ID " << rosterArray[i]->GetStudentID() << ": ";
                int* daysInCourse = rosterArray[i]->GetDaysInCourse();
                cout << "Average number of days in courses: " << (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3 << endl;
                return;
            }
        }
    }
    //Implement printInvalidEmails
    void roster::printInvalidEmails() {
        for (int i = 0; i < studentCount; ++i)
        {
            string emailAddress = rosterArray[i]->GetEmail();
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
    void roster::printByDegreeType(degreeType degreeType) {
        for (int i = 0; i < studentCount; ++i) {
            if (rosterArray[i]->GetDegreeType() == degreeType) {
                rosterArray[i]->print();
            }
        }
    }
