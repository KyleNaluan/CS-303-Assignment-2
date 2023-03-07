# CS-303-Assignment-2
- Kyle Naluan

- This file outputs to the console
- Main only has a runProgram() function, which can be found in Program_Functions.h/.cpp

** Linked List and Employee Problems Implemented Separately **

- There are header files for each employee class: Employee, Professional, and Nonprofessional
  - Employee is abstract, Professional and Nonprofessional are derived from it
  - Each employee class is implemented in a separate .cpp file

- Separate in this program is a Single_Linked_List class, which I made a template class so the list could be made with any data type, so the function declarations and     definitions are both in the .h file
  - This is because template classes cannot be compiled separately, implementing the functions in a .cpp would give a linker error
  - A work around would be instantiating the class in the .cpp, but the program would be limited to the item types that were instantiated

- Functions for the program functionality and declared in Program_Functions.h and defined in Program_Functions.cpp
  - These functions' primary purpose is to connect the employee and list functions to the user menu

- This program starts by opening a main menu to the user with 3 options:

  - View employees
    - This function displays a list of of 4 employees
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

  - Use linked list (For the purposes of this program I instantiated the linked list using type int)
    - This function brings up another menu that provides the user options to try the linked list functions
    - Last option is to quit the linked list menu, returning user to the main menu
 
  - Quit
    - This option exits the program

- Both menus loop until user decides to quit them
    
------------------------------------------------------------------------------------------------------
    
Screenshots:

- Main Menu
- 
![image](https://user-images.githubusercontent.com/112575790/223354575-f0d2d461-a30c-43a7-9df5-de8c51167a7f.png)


- List Menu
- 
![image](https://user-images.githubusercontent.com/112575790/223354856-e3e6dda6-ca55-4173-85bd-1cfa60d5bf21.png)


- Professional vs Nonprofessional Employee
- 
![image](https://user-images.githubusercontent.com/112575790/223354730-6f43de13-8fa2-4461-abd5-bb7e2a7db808.png)


- Push Front
- 
![image](https://user-images.githubusercontent.com/112575790/223355743-d5c09b6e-0e2d-4d3a-882b-ff2b5efdb94c.png)


- Push Back
- 
![image](https://user-images.githubusercontent.com/112575790/223355665-34a87cc3-b1d0-4671-b8dd-08a3adf161b2.png)


- Pop Front
- 
![image](https://user-images.githubusercontent.com/112575790/223355903-1756b1eb-f8aa-4dd2-9ce4-6c37ff14c8ed.png)


- Pop Back
- 
![image](https://user-images.githubusercontent.com/112575790/223356013-a05a78b2-c4c3-4829-9d7c-3e02ee04276b.png)


- Front
- 
![image](https://user-images.githubusercontent.com/112575790/223356150-11381898-cf25-48d3-9951-c636b8ae197d.png)


- Back
- 
![image](https://user-images.githubusercontent.com/112575790/223356268-9a1a8244-fc3a-4fb1-849d-a4ced54a1a0a.png)


- Insert
- 
![image](https://user-images.githubusercontent.com/112575790/223356450-ff27c384-25ab-4fdc-a5f1-d00d65f32e10.png)


- Remove
- 
![image](https://user-images.githubusercontent.com/112575790/223356695-3ff33013-9985-46e9-a0cc-251b3abb13eb.png)


- Find
- 
![image](https://user-images.githubusercontent.com/112575790/223356892-883ad68d-1893-4599-9a2d-ad14f196ed50.png)


- Empty
- 
![image](https://user-images.githubusercontent.com/112575790/223356991-43fa708e-08ee-4ee7-97a5-9185818de512.png)
![image](https://user-images.githubusercontent.com/112575790/223357075-501592fb-c63c-4f27-8d7f-0a31ef0ff925.png)



    
