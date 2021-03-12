#include <iostream>
#include <string>

#include "degree.h"
#include "student.h"
#include "roster.h"

class roster {

private:
    int studentNumber;
    student* classRosterArray;

    const std::string studentData[] = {
         "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
         "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
         "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
         "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
         "A5,Jieun,Park,jpar511@wgu.edu,39,10,20,30,SOFTWARE"
    };

    //array of pointers
    roster(int studentNumber, student* classRosterArray) {
        this->studentNumber = studentNumber;
        this->classRosterArray = new student(studentData[]);


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

        //destructor
        roster::~roster(); {
            delete classRosterArray;
        }
    }

    //add each student obj to array    
student* classRosterArray = new student(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, enum degreeType) {
       for (int i = 0; i < 5; ++i) {
        studentData[i] = new student();
       }
}

        //add
        void add(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, degreeType) {
        this->classRosterArray = new student;
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
    void remove(string studentID) {
        bool studentIDFound = false;
        for (int i = 0; (i < studentNumber) && !studentIDFound; ++i) {
            if (classRosterArray[i]->GetStudentID()) {
                classRosterArray[i] = classRosterArray[studentNumber + 1];
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
    void printAll() {
        for (int i = 0; i < studentNumber; ++i) {
            classRosterArray[i]->print();
        }
    }


    //printAverageDaysInCourse
    void roster::printAverageDaysInCourse(string studentID) {
        for (int i = 0; i < studentNumber; ++i) {
            if (classRosterArray[i]->GetStudentID()) {
                cout << "Student ID " << classRosterArray[i]->GetStudentID() << ": ";
                int* daysInCourse[] = classRosterArray[i]->GetDaysInCourse[]();
                cout << "Average number of days in courses: " << (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3 << endl;
                return;
            }
        }
    }


    //printInvalidEmails
    void roster::printInvalidEmails() {
        for (int i = 0; i < studentNumber; ++i) {
            string emailAddress = classRosterArray[i]->GetEmail();
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
            if (classRosterArray[i]->GetDegreeType()) {
                classRosterArray[i]->print();
            }
        }
    };
};