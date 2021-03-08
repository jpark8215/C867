#ifndef roster_h
#define roster_h

#include "degree.h"
#include "student.h"

#include <iostream>

using namespace std;

class roster {

public:

	int studentNumber;
	int parameter;
	student* classRoster;

	roster(const string studentData[], int studentNumber, int parameter);
	~roster();

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse[], degreeType degreeType);
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