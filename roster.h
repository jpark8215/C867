#ifndef roster_h
#define roster_h

#include <iostream>
#include <string>

#include "student.h"

class roster {

public:
	roster();

	static const int studentNumber = 5;
	
	void parse(const std::string studentData[roster::studentNumber]);
	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType courseType);
	void remove(std::string studentID);
	void printAll();
	void printAverageDaysInCourse(std::string studentID);
	void printInvalidEmails();
	void printByDegreeType(degreeType courseType);

	~roster();

private:
	student* classRosterArray[studentNumber];
	int index = 0;
};

#endif /*roster.h*/