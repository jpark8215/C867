#include "degree.h"
#include <iostream>
#include <string>
using namespace std;

class student{

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;

public:
	student();
	student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, enum class degreeType);

	~student();

	// accessor
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse1(int daysInCourse1);
	void setDaysInCourse2(int daysInCourse2);
	void setDaysInCourse3(int daysInCourse3);

	// mutator 
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int getDaysInCourse1();
	int getDaysInCourse2();
	int getDaysInCourse3();

	//print
	void printAll() {
		return;
	}

};
