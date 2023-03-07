#pragma once

#include "Single_Linked_List.h"
#include "Professional_Employee.h"
#include "Nonprofessional_Employee.h"

#include <vector>
#include <string>

using namespace std;

/*

========== MENU FUNCTIONS ==========

*/

char displayMainMenu();
// post : displays a menu with three choices - print employees, use linked list, and quit - then returns that users choice

char displayListMenu();
// post : displays a menu with choices corresponding to the linked list functions, then returns the option the user chose


/*

========== LIST FUNCTIONS ==========

*/

void runPushFront(Single_Linked_List<int>& list);
// post : asks user for an integer input and runs push_front()

void runPushBack(Single_Linked_List<int>& list);
// post : asks user for an integer input and runs push_back()

void runFront(Single_Linked_List<int>& list);
// post : first checks if list is empty, if not then runs front()

void runBack(Single_Linked_List<int>& list);
// post : first checks if list is empty, if not then runs back()

void runEmpty(Single_Linked_List<int>& list);
// post : displays a message to user if list is empty or not

void runInsert(Single_Linked_List<int>& list);
// post : asks user for input, handles it, then runs insert function

void runRemove(Single_Linked_List<int>& list);
// post : asks user for input, handles it, then runs remove function

void runFind(Single_Linked_List<int>& list);
// post : asks user for input, handles it, then runs find function


/*

========== EMPLOYEE FUNCTIONS ==========

*/

void setUpEmployees(vector<Employee*>& employees);
// pre : receives an empty vector of employees and loads it with 2 professional and 2 nonprofessional employees
// post : creates a set of professional and nonprofessional employees then pushes them onto vector

void printEmployeeList();
// post: sets up employee vector and prints out each individual employee in the vector


/*

========== INPUT VERIFICATION ==========

*/

int getIntegerInput();
// post : gets user input for an integer, checks to see if a number was entered, then returns the int value

size_t getIndexInput();
// post : gets user input for an index, checks to see if valid, then returns a size_t value

/*

========== PROGRAM FUNCTIONS ==========

*/

void runListMenu();
// post : handles the user input from displayListMenu() and runs a list function depending on that input

void runProgram();
// post : runs the functionalities of the program