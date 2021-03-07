#include "degree.h"
#include "student.h"

#include <iostream>

using namespace std;

class roster {

public:

	int maxCapacity;
	int studentNumber;
	student** students;


	roster(int maxCapacity, int studentNumber, student** students);
	~roster();


	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse[], degreeType degreeType);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printDegreeType(degreeType degreeType);

};