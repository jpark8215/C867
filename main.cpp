#include<iostream>
#include <string>

#include "degree.h"
#include "student.h"
#include "roster.h"


int main() {

    const std::string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Jieun,Park,jpar511@wgu.edu,39,10,20,30,SOFTWARE"
    };

    //print your details   
    std::cout << "C867: Scripting and Programming Applications" << std::endl;
    std::cout << "Programming Language Used: C++" << std::endl;
    std::cout << "ID: 001216539" << std::endl;
    std::cout << "Jieun Park" << std::endl;
    std::cout << std::endl;


    //instantiate class roster
    roster* classRosterArray;
    classRosterArray = new roster;


    //define parse
    roster parse(const std::string studentData[]);

    
        //Add students to array
    for (int i = 0; i < 5; i++) {
        roster add (std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType courseType);
    }


    //classRoster.printAll();
    std::cout << "Displaying all students:" << std::endl;
    roster printAll();
    std::cout << std::endl;


    //classRoster.printInvalidEmails();
    std::cout << "Displaying invalid emails:" << std::endl;
    roster printInvalidEmails();
    std::cout << std::endl;


    //loop through classRosterArray and for each element
    std::cout << "Average days spent in courses: " << std::endl;
    roster printAverageDaysInCourse("A1");
    roster printAverageDaysInCourse("A2");
    roster printAverageDaysInCourse("A3");
    roster printAverageDaysInCourse("A4");
    roster printAverageDaysInCourse("A5");
    std::cout << std::endl;


    //classRoster.printByDegreeProgram(SOFTWARE);
    std::cout << "Showing students in degree program: SOFTWARE" << std::endl;
    roster printByDegreeType(degreeType SOFTWARE);
    

    //classRoster.remove("A3");
    roster remove("A3");


    // classRoster.printAll(); again
    roster printAll();


    // classRoster.remove("A3"); again
    roster remove("A3");
    

    //destructor

    return 0;
};