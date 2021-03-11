#include<iostream>
#include <string>

#include "degree.h"
#include "student.h"
#include "roster.h"

using namespace std;

int main() {
    //print your details   
    cout << "C867: Scripting and Programming Applications" << endl;
    cout << "Programming Language Used: C++" << endl;
    cout << "ID: 001216539" << endl;
    cout << "Jieun Park" << endl;
    cout << endl;
  
    const string studentData[] = {
     "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
     "A5,Jieun,Park,jpar511@wgu.edu,39,10,20,30,SOFTWARE"
    };

    //instantiate class roster
    roster* classRoster = new roster(studentData[]);
   
    //Add students to array
    for (int i = 0; i < 5; i++) {
        classRoster->add(studentData[i]);
    }

    //classRoster.printAll();
    cout << "Displaying all students:" << endl;
    roster printAll();
    cout << endl;


    //classRoster.printInvalidEmails();
    cout << "Displaying invalid emails:" << endl;
    roster printInvalidEmails();
    cout << endl;


    //loop through classRosterArray and for each element
    cout << "Average days spent in courses: " << endl;
    roster printAverageDaysInCourse("A1");
    roster printAverageDaysInCourse("A2");
    roster printAverageDaysInCourse("A3");
    roster printAverageDaysInCourse("A4");
    roster printAverageDaysInCourse("A5");
    cout << endl;


    //classRoster.printByDegreeProgram(SOFTWARE);
    cout << "Showing students in degree program: SOFTWARE" << endl;
    roster printByDegreeType(degreeType SOFTWARE);
    

    //classRoster.remove("A3");
    roster erase(remove("A3"));


    // classRoster.printAll(); again
    roster printAll();


    // classRoster.remove("A3"); again
    roster erase(remove("A3"));
    

    //destructor
    roster::~roster();

    return 0;
};