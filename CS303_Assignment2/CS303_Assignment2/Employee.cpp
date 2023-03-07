#include "Employee.h"

#include <iostream>

Employee::Employee() {
	lName = " ";
	fName = " ";
	gender = ' ';
	age = 0;
}

Employee::Employee(string l, string f, char g, int a) {
	lName = l;
	fName = f;
	gender = toupper(g);
	age = a;
}

void Employee::displayEmployeeInfo() {
	cout << "Name: " << fName << " " << lName << endl;
	cout << "   - Age:    " << age << endl;
	cout << "   - Gender: " << gender << endl;
}