#include "degree.h"
#include "student.h"

#include <iostream>

using namespace std;

class roster {

public:

	string studentID;
	int studentCount;
	student* students;

	roster();
	roster(string studentID, int studentCount, student* student);

	~roster();

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse[], degreeType degreeType);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printDegreeType(degreeType degreeType);

};