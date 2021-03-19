#include<iostream>
#include <string>

#include "roster.h"

//F.Demonstrate the program’s required functionality by adding a main() function in main.cpp, 
//which will contain the required function calls to achieve the following results :

int main() {

    const std::string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Jieun,Parkk,jpar511@wgu.edu,39,10,20,30,SOFTWARE"
    };

    //print your details   
    std::cout << "C867: Scripting and Programming Applications" << std::endl;
    std::cout << "Programming Language Used: C++" << std::endl;
    std::cout << "ID: 001216539" << std::endl;
    std::cout << "Jieun Park" << std::endl;
    std::cout << std::endl;
    
    //Create an instance of the Roster class called classRoster.
    roster classRoster;

    //define parse
    classRoster.parse(studentData);

    //classRoster.printAll();
    std::cout << "Displaying all students:" << std::endl;
    classRoster.printAll(); 
    std::cout << std::endl;

    //classRoster.printInvalidEmails();
    std::cout << "Displaying invalid emails:" << std::endl;
    classRoster.printInvalidEmails();
    std::cout << std::endl;

    //loop through classRosterArray and for each element
    //classRoster.printAverageDaysInCourse(/*current_object's student id*/);
    std::cout << "Average days spent in courses: " << std::endl;
    classRoster.printAverageDaysInCourse("A1");
    classRoster.printAverageDaysInCourse("A2");
    classRoster.printAverageDaysInCourse("A3");
    classRoster.printAverageDaysInCourse("A4");
    classRoster.printAverageDaysInCourse("A5");
    std::cout << std::endl;

    //classRoster.printByDegreeProgram(SOFTWARE);
    std::cout << "Showing students in degree program: SOFTWARE" << std::endl;
    classRoster.printByDegreeType(SOFTWARE);
    std::cout << std::endl;
  
    //classRoster.remove("A3");
    classRoster.remove("A3");
    std::cout << std::endl;

    // classRoster.printAll(); again
    std::cout << "A3 Removed" << std::endl;
    classRoster.printAll();
    std::cout << std::endl;

    // classRoster.remove("A3"); again
    classRoster.remove("A3");
    std::cout << std::endl;
 
    //destructor   
    return 0;
};


//F.Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results :
//1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
//2.  Create an instance of the Roster class called classRoster.
//3.  Add each student to classRoster.
//4.  Convert the following pseudo code to complete the rest of the  main() function :
//    classRoster.printAll();
//classRoster.printInvalidEmails();
////loop through classRosterArray and for each element:
//classRoster.printAverageDaysInCourse(/*current_object's student id*/);
//classRoster.printByDegreeProgram(SOFTWARE);
//classRoster.remove("A3");
//classRoster.printAll();
//classRoster.remove("A3");
////expected: the above line should print a message saying such a student with this ID was not found.
//5.  Implement the destructor to release the memory that was allocated dynamically in Roster.
