#include "degree.h"
#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	const int numDegreeTypes = 3;
	enum class degreeType { SECURITY, NETWORK, SOFTWARE };
	string courseTypeStrings[] = { "SECURITY", "NETWORK", "SOFTWARE" };

	student(); {
		string studentID = studentID;
		string firstName = firstName;
		string lastName = lastName;
		string emailAddress = emailAddress;
		int age = age;
		int daysInCourse1 = daysInCourse1;
		int daysInCourse2 = daysInCourse2;
		int daysInCourse3 = daysInCourse3;
		degreeType degreeType;
	}

	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse1(int daysInCourse1);
	void setDaysInCourse2(int daysInCourse2);
	void setDaysInCourse3(int daysInCourse3);

	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int getDaysInCourse1();
	int getDaysInCourse2();
	int getDaysInCourse3();

	return 0;
}