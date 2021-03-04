
#include <iostream>
#include "degree.h"
#include "student.h"
#include <string>
#include <array>
using namespace std;

class classRoster{
public:
	string studentID;
	int studentCount;
	int maxCapacity;

	classRoster();

	classRoster(const string studentID, int studentCount, int maxCapacity);
	~classRoster();

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType degreeType);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printDegreeType(degreeType degreeType);

	void getClassRosterArray();
};
