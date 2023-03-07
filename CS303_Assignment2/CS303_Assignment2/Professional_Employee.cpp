#include "Professional_Employee.h"

#include <iostream>
#include <iomanip>

Professional_Employee::Professional_Employee() : Employee() {
	monthlySalary = 0;
	daysWorked = 0;
}

Professional_Employee::Professional_Employee(string l, string f, char g, int a, double m, int d) : Employee(l, f, g, a) {
	monthlySalary = m;
	daysWorked = d;
}

double Professional_Employee::calcWeeklySalary() {
	return (monthlySalary / 4.0);
}

// Company contributes 10% of employee yearly salary to professionals | Completely made up contribution rate
double Professional_Employee::calcHealthCareContribution() {
	double yearlySalary = monthlySalary * 12;

	return (yearlySalary * 0.10);
}

double Professional_Employee::calcVacationDays() {
	double vacationDays;
	double percentWorked = (static_cast<double>(daysWorked) / 365);

	// multiply by accrual rate (10 days in this case)
	vacationDays = percentWorked * 10;

	return vacationDays;
}

void Professional_Employee::displayEmployeeInfo() {
	Employee::displayEmployeeInfo();
	
	cout << endl;

	cout.setf(ios::fixed);
	cout.precision(2);
	
	cout << "   - Monthly Salary: $" << monthlySalary << endl;
	cout << "   - Days Worked   : " << daysWorked << endl << endl;
	cout << "   - Weekly Salary          : $" << calcWeeklySalary() << endl;
	cout << "   - Vacation Days          : " << calcVacationDays() << endl;
	cout << "   - Healthcare Contribution: $" << calcHealthCareContribution() << endl;
}