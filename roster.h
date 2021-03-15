#ifndef roster_h
#define roster_h

#include <iostream>
#include <string>

#include "degree.h"
#include "student.h"


class roster {
public:

	static const int studentNumber = 5;
	student classRosterArray[studentNumber];


	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType courseType);
	void remove(std::string studentID);
	void printAll();
	void printAverageDaysInCourse(std::string studentID);
	void printInvalidEmails();
	void printDegreeType(degreeType courseType);

	roster();
	~roster();
};

#endif /*roster.h*/