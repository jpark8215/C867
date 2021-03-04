#include<iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

int main()
{
    //print your details   
    cout << "C867: Scripting and Programming Applications" << endl;
    cout << "Programming Language Used: C++" << endl;
    cout << "ID: 001216539" << endl;
    cout << "Jieun Park" << endl;
    cout << endl;

    //instantiate class roster 
     classRoster();
     classRoster(string studentID, int studentCount, int maxCapacity);
    
    //Add
    const string student[] = {
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Jieun,Park,jpar511@wgu.edu,39,10,20,30,SOFTWARE"
    };

    //classRoster.printAll();
    cout << "Class Roster:" << endl;
    classRoster printAll();
    cout << endl;

    //classRoster.printInvalidEmails();
    cout << "The following emails are invalid:" << endl;
    classRoster printInvalidEmails();
    cout << endl;

    //loop through classRosterArray and for each element
    //classRoster.printAverageDaysInCourse(/*current_object's student id*/);
    cout << "Average days spent in courses: " << endl;
    classRoster printAverageDaysInCourse(const char [1]);
    classRoster printAverageDaysInCourse(const char [2]);
    classRoster printAverageDaysInCourse(const char [3]);
    classRoster printAverageDaysInCourse(const char [4]);
    classRoster printAverageDaysInCourse(const char [5]);
    cout << endl;


    //classRoster.printByDegreeProgram(SOFTWARE);
    cout << "Displaying roster by SOFTWARE program:" << endl;
    classRoster printByDegreeType(enum class degreeType SOFTWARE);
    cout << "Displaying roster by NETWORK program:" << endl;
    classRoster printByDegreeType(enum class degreeType NETWORK);
    cout << "Displaying roster by SECURITY program:" << endl;
    classRoster printByDegreeProgram(enum class degreeType SECURITY);
    cout << endl;

    //classRoster.remove("A3");
    classRoster remove(const char[3]);

    // classRoster.printAll(); again
    classRoster printAll();

    // classRoster.remove("A3"); again
    classRoster remove(const char[3]);
    cout << endl;
    
    //destructor
    ~classRoster();
};