# CS-303-Assignment-2
- Kyle Naluan

- This file outputs to the console

** Linked List and Employee Problems Implemented Separately **

- There are header files for each employee class: Employee, Professional, and Nonprofessional
  - Employee is abstract, Professional and Nonprofessional are derived from it
  - Each employee class is implemented in a separate .cpp file

- Separate in this program is a Single_Linked_List class, which I made a template class so the list could be made with any data type, so the function declarations and     definitions are both in the .h file
  - This is because template classes cannot be compiled separately, implementing the functions in a .cpp would give a linker error
  - A work around would be instantiating the class in the .cpp, but the program would be limited to the item types that were instantiated

- This program starts by opening a menu to the user with 3 options:

  - View employees
    - This function displays a list of employees
    - These employees are pre-determined
      - I created them in the program (variety of professional and nonprofessional employees) and pushed them onto a vector of type *Employee 
      - By default, common employee information is displayed (name, age, sex)
      - Depending on the type of employee, different fields are displayed
      - Professional
        - Monthly Salary, Days Worked
      - Nonprofessional
        - Hours worked per week, hourly wage
      - Both employee types also display weekly salary, vacation days, and healthcare contributions
        - These are calculated differently for pro vs. non pro employees

  - Use linked list
    - This function brings up another menu that provides the user options to try the linked list functions
    - Last option is to quit the linked list menu, returning user to the main menu
 
  - Quit
    - This option exits the program
