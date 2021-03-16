#include <iostream>
#include <string>

#include "roster.h"
#include "student.h"


//1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
student* classRosterArray[roster::studentNumber];


    //parse each set    
void parse(const std::string studentData[roster::studentNumber]) {
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
        if (std::string s9 = "SECURITY") {
            courseType = SECURITY
        }
        else if (std::string s9 = "NETWORK") {
            courseType = NETWORK
        }
        else (std::string s9 = "SOFTWARE") {
            courseType = SOFTWARE
        };

        //call add, give all the arguments it needs     
        //add will build the student, pointer    
        //add each student obj to array    

    }
    //destructor
    ~roster() {
        delete classRosterArray[];
        return;
    }
}

    //add//call the student constructor using the new command, and put the result into the class roster array

 void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType courseType) {
      student* classRosterArray[] = new student();
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


 //E.Create a Roster class (roster.cpp) by doing the following :
//1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
//2.  Create a student object for each student in the data tableand populate classRosterArray.
//a.Parse each set of data identified in the “studentData Table.”
//b.Add each student object to classRosterArray.
//3.  Define the following functions :
//a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.
//b.  public void remove(string studentID)  that removes students from the roster by student ID.If the student ID does not exist, the function prints an error message indicating that the student was not found.
//c.  public void printAll() that prints a complete tab - separated list of student data in the provided format : A1[tab] First Name : John[tab] Last Name : Smith[tab] Age : 20[tab]daysInCourse : {35, 40, 55} Degree Program : Security.The printAll() function should loop through all the students in classRosterArrayand call the print() function for each student.
//d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses.The student is identified by the studentID parameter.
//e.  public void printInvalidEmails() that verifies student email addressesand displays all invalid email addresses to the user.
//Note : A valid email should include an at sign('@') and period('.') and should not include a space(' ').
//f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.