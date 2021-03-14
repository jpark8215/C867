#include <iostream>
#include <string>

#include "roster.h"
#include "student.h"

class roster {

private:
    static const int studentNumber = 5;
    student* classRosterArray = new student[studentNumber];

public:

    //array of pointers
    student** studentData = new student * [studentNumber];
    student* studentData[studentNumber];


    //destructor
    ~roster() {
        delete classRosterArray;
        return;
    }

    //parse each set    
    void parse(const std::string studentData[studentNumber]) {
        for (int i = 0; i < studentNumber; i++) {
            size_t rhs = studentData[i].find(",");
            student[i].studentID = studentData[i].substr(0, rhs);

            size_t lhs = rhs + 1;
            rhs = studentData[i].find(",", lhs);
            student[i].firstName = studentData[i].substr(0, lhs, rhs - lhs);

            lhs = rhs + 1;
            rhs = studentData[i].find(",", lhs);
            student[i].lastName = studentData[i].substr(0, lhs, rhs - lhs);

            lhs = rhs + 1;
            rhs = studentData[i].find(",", lhs);
            student[i].emailAddress = studentData[i].substr(0, lhs, rhs - lhs);

            lhs = rhs + 1;
            rhs = studentData[i].find(",", lhs);
            student[i].age = studentData[i].substr(0, lhs, rhs - lhs);

            lhs = rhs + 1;
            rhs = studentData[i].find(",", lhs);
            student[i].daysInCourse[0] = studentData[i].substr(0, lhs, rhs - lhs);

            lhs = rhs + 1;
            rhs = studentData[i].find(",", lhs);
            student[i].daysInCourse[1] = studentData[i].substr(0, lhs, rhs - lhs);

            lhs = rhs + 1;
            rhs = studentData[i].find(",", lhs);
            student[i].daysInCourse[2] = studentData[i].substr(0, lhs, rhs - lhs);

            lhs = rhs + 1;
            rhs = studentData[i].find(",", lhs);
            student[i].degreeType = studentData[i].substr(0, lhs, rhs - lhs);

        }
    }


    //add each student obj to array    
    roster::add classRosterArray(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse, enum degreeType) {
        for (int i = 0; i < studentNumber; ++i) {
            studentData[i] = new student();
        }
    }



    //add
    void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse, degreeType) {
        this->classRosterArray = new student();
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
    void remove(std::string studentID) {
        bool studentIDFound = false;
        for (int i = 0; (i < studentNumber) && !studentIDFound; ++i) {
            if (classRosterArray[i]->GetStudentID()) {
                classRosterArray[i] = classRosterArray[studentNumber + 1];
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
        for (int i = 0; i < studentNumber; ++i) {
            classRosterArray[i]->print();
        }
    }


    //printAverageDaysInCourse
    void printAverageDaysInCourse(string studentID) {
        for (int i = 0; i < studentNumber; ++i) {
            if (classRosterArray[i]->GetStudentID()) {
                std::cout << "Student ID " << classRosterArray[i]->GetStudentID() << ": ";
                int* daysInCourse[] = classRosterArray[i]->GetDaysInCourse[]();
                std::cout << "Average number of days in courses: " << (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3 << endl;
                return;
            }
        }
    }


    //printInvalidEmails
    void printInvalidEmails() {
        for (int i = 0; i < studentNumber; ++i) {
            std::string emailAddress = classRosterArray[i]->GetEmail();
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
    void printByDegreeType(degreeType degreeType) {
        for (int i = 0; i < studentNumber; ++i) {
            if (classRosterArray[i]->GetDegreeType()) {
                classRosterArray[i]->print();
            }
        }
    }
};