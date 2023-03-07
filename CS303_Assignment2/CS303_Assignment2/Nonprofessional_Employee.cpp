#include "Nonprofessional_Employee.h"

#include <iostream>
#include <iomanip>

Nonprofessional_Employee::Nonprofessional_Employee() : Employee() {
	hours = 0;
	payRate = 0;
}

Nonprofessional_Employee::Nonprofessional_Employee(string l, string f, char g, int a, int h, double p) : Employee(l, f, g, a) {
	hours = h;
	payRate = p;
}

double Nonprofessional_Employee::calcWeeklySalary() {
	// Multiply hours worked by hourly rate
	return (hours * payRate);
}

// Company contributes 5% of employee yearly salary to nonprofessionals | Completely made up contribution rate
double Nonprofessional_Employee::calcHealthCareContribution() {
	double yearlySalary = (calcWeeklySalary() * 52);

	return (yearlySalary * 0.05);
}

double Nonprofessional_Employee::calcVacationDays() {
	double vacationHours;

	// Divide weekly hours worked by 40
	double percentWorked = (static_cast<double>(hours) / 40);

	// Multiply it by the amount of vaction professionals are offered (10 days ~ 80 hours)
	vacationHours = (percentWorked * 80);

	// Divide by 24 to convert to days
	return (vacationHours / 24);
}

void Nonprofessional_Employee::displayEmployeeInfo() {
	Employee::displayEmployeeInfo();

	cout << endl;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "   - Hours Per Week: " << hours << endl;
	cout << "   - Hourly Rate   : $" << payRate << endl << endl;

	cout << "   - Weekly Salary          : $" << calcWeeklySalary() << endl;
	cout << "   - Vacation Days          : " << calcVacationDays() << endl;
	cout << "   - Healthcare Contribution: $" << calcHealthCareContribution() << endl;



}