#ifndef student_h
#define student_h

#include "degree.h"

#include <iostream>

using namespace std;

class student {

public:

	student(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse[], enum class degreeType);
	~student();


	// mutator 
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse(int* daysInCourse[]);
	void setDegreeType(degreeType degreeType);

	// accessor
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getDaysInCourse();
	degreeType getDegreeType();

private:

	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int* daysInCourse;
	degreeType degreeType;


	void print();
};

#endif /*student_h*/