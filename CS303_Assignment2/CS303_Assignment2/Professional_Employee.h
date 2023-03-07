#pragma once

#ifndef PROFESSIONAL_EMPLOYEE_H_
#define PROFESSIONAL_EMPLOYEE_H_

#include "Employee.h"

class Professional_Employee : public Employee {
private:
	double monthlySalary;
	int daysWorked; // yearly
	
public:
	// Constructors
	Professional_Employee();
	Professional_Employee(string l, string f, char g, int a, double m, int d);

	// Member Functions
	double calcWeeklySalary();
	double calcHealthCareContribution();
	double calcVacationDays();

	void displayEmployeeInfo();

	// Getters and Setters
	double getMonthlySalary() { return monthlySalary; }

	void setMonthlySalary(double m) { monthlySalary = m; }
};

#endif // !PROFESSIONAL_EMPLOYEE_H_
