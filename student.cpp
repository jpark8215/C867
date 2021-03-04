#include "degree.h"
#include "student.h"
#include <iostream>
#include <string>
using namespace std;

void student (string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, enum class degreeType){
	
	studentID = studentID;
	firstName = firstName;
	lastName = lastName;
	emailAddress = emailAddress;
	age = age;
	daysInCourse1 = daysInCourse1;
	daysInCourse2 = daysInCourse2;
	daysInCourse3 = daysInCourse3;
	degreeType = degreeType;

};

student::~student() {

};

void setStudentID(string studentID);
void setFirstName(string firstName);
void setLastName(string lastName);
void setEmailAddress(string emailAddress);
void setAge(int age);
void setDaysInCourse1(int daysInCourse1); 
void setDaysInCourse2(int daysInCourse2);
void setDaysInCourse3(int daysInCourse3);
enum class degreeType degreeType;

string student::getStudentID() {
	return studentID;
};
string student::getFirstName() {
	return firstName;
};
string student::getLastName() {
	return lastName;
};
string student::getEmailAddress() {
	return emailAddress;
};
int student::getAge() {
	return age;
};
int student::getDaysInCourse1() {
	return daysInCourse1;
};
int student::getDaysInCourse2() {
	return daysInCourse2;
};
int student::getDaysInCourse3() {
	return daysInCourse3;
};
enum class degreeType getDegreeType() {
	return;
};
