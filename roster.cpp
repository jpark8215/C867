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
        //call add, give all the arguments it needs  //add will build the student //add each student obj to array    
        add(s1, s2, s3, s4, s5, s6, s7, s8, courseType);
    }
}

    //add//call the student constructor using the new command, and put the result into the class roster array
 void roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType courseType) {
     student* s= new student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, courseType);
     //int courseDays[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
     //student* s= new student(studentID, firstName, lastName, emailAddress, age, courseDays, courseType);

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
            // int* daysInCourse = classRosterArray[i]->getDaysInCourse();
             int daysInCourse1 = classRosterArray[i]->getDaysInCourse1();
             int daysInCourse2 = classRosterArray[i]->getDaysInCourse2();
             int daysInCourse3 = classRosterArray[i]->getDaysInCourse3();
             //std::cout << "Average number of days in the three courses: " << (daysInCourse1 + daysInCourse2 + daysInCourse3) / 3 << std::endl;
             std::cout << "Average number of days in the three courses: " << (daysInCourse1+daysInCourse2+daysInCourse3) / 3 << std::endl;

             return;
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
         
        // else if (emailAddress.find(" ") !=  ) {
         ////else if (emailAddress.isspace()) {
         ////else if (emailAddress.find(" ", 0) {
         ////std::cout << "Invalid email. No space is allowed: " << emailAddress << std::endl;
         //}
     }
 }
 // 
    //printByDegreeProgram
 void roster::printByDegreeType(degreeType courseType) {
     for (int i = 0; i < roster::studentNumber; ++i) {
         if (classRosterArray[i]->getDegreeType() == courseType) {
             classRosterArray[i]->print();
             std::cout << std::endl;
         }
     }
 }

 roster::~roster() {

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