#ifndef student_h
#define student_h

#include <iostream>
#include <string>

#include "degree.h"
	
	//student class
class student {
	
private:

	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	//int daysInCourse[3];
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	degreeType courseType;

public:

	student();
	student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeType courseType);
	~student();

	// setter 
	void setStudentID(std::string studentID);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setEmailAddress(std::string emailAddress);
	void setAge(int age);
	//void setDaysInCourse(int* daysInCourse);
	void setDaysInCourse1(int daysInCourse1);
	void setDaysInCourse2(int daysInCourse2);
	void setDaysInCourse3(int daysInCourse3);
	void setDegreeType(degreeType courseType);

	// getter
	std::string getStudentID();
	std::string getFirstName();
	std::string getLastName();
	std::string getEmailAddress();
	int getAge();
	//int* getDaysInCourse();
	int getDaysInCourse1();
	int getDaysInCourse2();
	int getDaysInCourse3();
	degreeType getDegreeType();

	//static std::string getDegreeType(degreeType dp) {
	//	if (dp == degreeType::SECURITY) {
	//		return "SECURITY";
	//	}
	//	if (dp == degreeType::NETWORK) {
	//		return "NETWORK";
	//	}
	//	if (dp == degreeType::SOFTWARE) {
	//		return "SOFTWARE";
	//	}
	//}

	void print();
};

#endif /*student_h*/