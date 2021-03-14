#ifndef student_h
#define student_h

#include <iostream>
#include <string>

#include "degree.h"

	
	//student class
class student {

public:

	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int* daysInCourse;
	enum class degreeType;

	~student();

	// setter 
	void setStudentID(std::string studentID);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setEmailAddress(std::string emailAddress);
	void setAge(int age);
	void setDaysInCourse(int daysInCourse);
	void setDegreeType(enum degreeType);

	// getter
	std::string getStudentID();
	std::string getFirstName();
	std::string getLastName();
	std::string getEmailAddress();
	int getAge();
	int* getDaysInCourse();
	enum degreeType getDegreeType();


private:

	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int* daysInCourse;
	degreeType degreeType;


	void print();
};

#endif /*student_h*/