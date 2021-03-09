#ifndef roster_h
#define roster_h

#include <iostream>
#include <string>

#include "degree.h"
#include "student.h"

using namespace std;

class roster {

public:

	int studentNumber;
	int parameter;
	student* classRoster;

	roster(int studentNumber, int parameter, student* classRoster);
	~roster();

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, degreeType degreeType);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printDegreeType(degreeType degreeType);

private:
	int studentNumber;
	int parameter;
	student* classRoster;

};

#endif /*roster.h*/