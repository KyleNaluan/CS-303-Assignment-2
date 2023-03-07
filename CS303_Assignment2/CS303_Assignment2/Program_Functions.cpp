#include "Program_Functions.h"

#include <iostream>
#include <stdexcept>

using namespace std;


char displayMainMenu() {
	char choice;

	// Display Menu
	cout << "Program Menu Options:" << endl;
	cout << "   1 - Print Employee List" << endl;
	cout << "   2 - Test Linked List" << endl;
	cout << "   Q - Quit Program" << endl << endl;

	cout << "Select an Option: ";

	// Get choice
	cin >> choice;
	choice = toupper(choice);

	// Check validity of input and re-prompt user until valid
	while (choice != '1' && choice != '2' && choice != 'Q') {
		cout << endl;
		cout << "Invalid Choice. Please enter another option: ";
		cin.ignore(100, '\n');
		cin >> choice;
		choice = toupper(choice);
	}

	cout << endl;

	return choice;

}

char displayListMenu() {
	char choice;

	// Display menu
	cout << "List Menu Options:" << endl;
	cout << "   1 - Push an item to the front" << endl;
	cout << "   2 - Push an item to the back" << endl;
	cout << "   3 - Pop item from the front" << endl;
	cout << "   4 - Pop item from the back " << endl;
	cout << "   5 - Retrieve item from the front" << endl;
	cout << "   6 - Retrieve item from the back" << endl;
	cout << "   7 - Insert item at index" << endl;
	cout << "   8 - Remove item at index" << endl;
	cout << "   9 - Find item in list" << endl;
	cout << "   0 - Check empty" << endl;

	cout << "   Q - Quit program" << endl << endl;

	cout << "Select an Option: ";

	// Get choice
	cin >> choice;
	choice = toupper(choice);

	// Check validity of input and re-prompt user until valid
	while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6'
		&& choice != '7' && choice != '8' && choice != '9' && choice != '0' && choice != 'Q') {
		cout << endl;
		cout << "Invalid Choice. Please enter another option: ";
		cin.ignore(100, '\n');
		cin >> choice;
		choice = toupper(choice);
	}

	cout << endl;

	return choice;
}

void runPushFront(Single_Linked_List<int>& list) {
	cout << "Enter a number to push to the front of the list: ";
	int num = getIntegerInput();

	list.push_front(num);
}

void runPushBack(Single_Linked_List<int>& list) {
	cout << "Enter a number to push to the back of the list: ";
	int num = getIntegerInput();

	list.push_back(num);
}

void runFront(Single_Linked_List<int>& list) {
	if (list.empty())
		cout << "List is empty" << endl;

	else {
		int num = list.front();

		cout << "The number at the front is " << num << endl;
	}
}

void runBack(Single_Linked_List<int>& list) {
	if (list.empty())
		cout << "List is empty" << endl;

	else {
		int num = list.back();

		cout << "The number at the back is " << num << endl;
	}
}

void runEmpty(Single_Linked_List<int>& list) {
	bool empty = list.empty();

	if (empty)
		cout << "The list is empty\n\n\n";
	else
		cout << "The list is not empty\n\n\n";

}

void runInsert(Single_Linked_List<int>& list) {
	// Get index
	cout << "Enter an index to insert the item: ";
	size_t index = getIndexInput();

	// Get item to insert
	cout << "Enter a number to insert: ";
	int num = getIntegerInput();

	// Insert number into list
	list.insert(index, num);

}

void runRemove(Single_Linked_List<int>& list) {
	// Get index
	cout << "Enter an index to remove item: ";
	size_t index = getIndexInput();

	// Remove item at index from list
	bool removed = list.remove(index);

	if (removed)
		cout << "Item successfully removed" << endl << endl;
	else
		cout << "Item not removed (index past list range)" << endl << endl;
}

void runFind(Single_Linked_List<int>& list) {
	// Get target item
	cout << "Enter item to find in the list: ";
	int num = getIntegerInput();

	// Search for it
	size_t position = list.find(num);

	// Display results
	if (position == list.getNumItems())
		cout << "Item was not found in list" << endl << endl;
	else
		cout << "Item was found at index " << position << endl << endl;

}


void setUpEmployees(vector<Employee*>& employees) {
	// Employee 1
	Professional_Employee* e1 = new Professional_Employee("Smith", "John", 'M', 37, 11000.00, 258);
	employees.push_back(e1);

	// Employee 2
	Nonprofessional_Employee* e2 = new Nonprofessional_Employee("Irving", "Kyrie", 'M', 30, 31, 17.50);
	employees.push_back(e2);

	// Employee 3
	Professional_Employee* e3 = new Professional_Employee("Potter", "Lily", 'F', 35, 13500.00, 249);
	employees.push_back(e3);

	// Employee 4
	Nonprofessional_Employee* e4 = new Nonprofessional_Employee("Black", "Rebecca", 'F', 26, 38, 16.00);
	employees.push_back(e4);
}

void printEmployeeList() {
	vector<Employee*> employees;
	setUpEmployees(employees);

	for (int i = 0; i < employees.size(); i++) {
		cout << "Employee #" << i + 1 << ":" << endl;
		employees[i]->displayEmployeeInfo();
		cout << endl << endl;
	}
}


int getIntegerInput() {
	int num;
	bool valid = false;

	// Keep asking user for input until valid input is received
	while (!valid) {
		try {
			cin >> num;
			cout << endl;

			// Logic from CS201L
			if (cin.fail()) {
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				throw runtime_error("Invalid Input Received");
			}

			valid = true;
		}

		// If user enters non-integer value, then proceed to next iteration of the loop
		catch (runtime_error& e) {
			cout << e.what() << endl;
			cout << "Enter another number: ";
			continue;
		}

		// If any unknown errors occur, terminate the program
		catch (...) {
			cout << "Undefined error caught";
			abort();
		}
	}

	return num;
}

size_t getIndexInput() {
	size_t index;
	bool valid = false;

	// Keep asking user for input until valid input is received
	while (!valid) {
		try {
			cin >> index;
			cout << endl;

			// Logic from CS201L
			if (cin.fail()) {
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				throw runtime_error("Invalid Input Received");
			}

			valid = true;
		}

		// If user enters non-integer value, then proceed to next iteration of the loop
		catch (runtime_error& e) {
			cout << e.what() << endl;
			cout << "Enter another number: ";
			continue;
		}

		// If any unknown errors occur, terminate the program
		catch (...) {
			cout << "Undefined error caught";
			abort();
		}
	}

	return index;
}


void runListMenu() {
	// Initialize List
	Single_Linked_List<int> nums;

	// Run Menu Options
	bool keeprunning = true;
	char choice;

	cout << "Welcome to the List Menu!\n\n\n";

	while (keeprunning) {
		// Display Current List
		cout << "Current List:" << endl;
		nums.displayList();
		cout << endl;

		// Display Menu and Get Choice
		choice = displayListMenu();
		cin.ignore(100, '\n');

		// Run Functions based on user choice
		switch (choice) {
		case '1':
			runPushFront(nums);
			cout << endl << endl;
			break;
		case '2':
			runPushBack(nums);
			cout << endl << endl;
			break;
		case '3':
			nums.pop_front();
			cout << endl << endl;
			break;
		case '4':
			nums.pop_back();
			cout << endl << endl;
			break;
		case '5':
			runFront(nums);
			cout << endl << endl;
			break;
		case '6':
			runBack(nums);
			cout << endl << endl;
			break;
		case '7':
			runInsert(nums);
			break;
		case '8':
			runRemove(nums);
			break;
		case '9':
			runFind(nums);
			break;
		case '0':
			runEmpty(nums);
			break;
		case 'Q':
			keeprunning = false;
			break;
		}
	}

}

void runProgram() {
	bool keeprunning = true;
	char choice;

	cout << "Welcome to the Assignment 2!\n\n\n";

	while (keeprunning) {

		// Display Menu and Get Choice
		choice = displayMainMenu();
		cin.ignore(100, '\n');

		// Run Functions based on user choice
		switch (choice) {
		case '1':
			printEmployeeList();
			break;
		case '2':
			runListMenu();
			break;
		case 'Q':
			keeprunning = false;
			break;
		}	
	}

}