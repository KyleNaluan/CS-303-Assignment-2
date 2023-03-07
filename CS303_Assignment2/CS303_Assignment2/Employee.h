#pragma once

#include <string>

using namespace std;

class Employee {
private:
	string lName;
	string fName;
	char gender;
	int age;

public:
	// Constructors - This class won't be instantiated but these will be used for derived classes
	Employee();
	Employee(string l, string f, char g, int a);

	// Member Functions - These will differ between professional and nonprofessional employees
	virtual double calcWeeklySalary() = 0;
	virtual double calcHealthCareContribution() = 0;
	virtual double calcVacationDays() = 0;

	virtual void displayEmployeeInfo();

	// Getters and Setters
	string getlName()   { return lName; }
	string getfName()   { return fName; }
	char getGender()    { return gender; }
	int getAge()        { return age; }
	
	void setlName(string l)   { lName = l; }
	void setfName(string f)   { fName = f; }
	void setGender(char g)    { gender = g; }
	void setAge(int a)        { age = a; }
};

