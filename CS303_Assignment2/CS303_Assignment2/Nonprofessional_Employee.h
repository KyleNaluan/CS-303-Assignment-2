#pragma once

#ifndef NONPROFESSIONAL_EMPLOYEE_H_
#define NONPROFESSIONAL_EMPLOYEE_H_

#include "Employee.h"

class Nonprofessional_Employee : public Employee {
private:
	int hours; // per week
	double payRate; // hourly wage

public:
	// Constructors
	Nonprofessional_Employee();
	Nonprofessional_Employee(string l, string f, char g, int a, int h, double p);

	// Member Functions
	double calcWeeklySalary();
	double calcHealthCareContribution();
	double calcVacationDays();

	void displayEmployeeInfo();

	// Getters and Setters
	int getHours()      { return hours; }
	double getPayRate() { return payRate; }

	void setHours(int h)   { hours = h; }
	void setPayRate(int p) { payRate = p; }
};

#endif // !NONPROFESSIONAL_EMPLOYEE_H_
