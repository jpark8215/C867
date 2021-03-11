#ifndef student_h
#define student_h

#include <iostream>
#include <string>

#include "degree.h"

using namespace std;
	
	//student class
class student {

private:

	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int* daysInCourse;
	degreeType degreeType;

public:

	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int* daysInCourse;
	enum class degreeType;

	student(string studentID, string firstName, string lastName, string emailAddress, int age, int* daysInCourse, enum class degreeType);
	~student();

	// setter 
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse(int* daysInCourse);
	void setDegreeType(enum degreeType);

	// getter
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getDaysInCourse();
	enum degreeType getDegreeType();


	void print();
};

#endif /*student_h*/