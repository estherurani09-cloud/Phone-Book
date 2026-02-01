# Phone-Book
A console-based Phone Book Application developed in C using singly linked lists and file handling. The application supports creating, searching, editing, deleting, and saving contacts with multiple phone numbers and email details, while ensuring data persistence across executions.

Pre-Requisites:
C Programming,
Structures & Pointers,
Singly Linked List,
File Handling,
Makefile.

Features:
Add a new contact, 
Store multiple phone numbers for one contact,
Add email and address details,
Display all contacts,
Search contact by name,
Edit contact details,
Delete contact,
Save contacts to file,
Load saved contacts when app restarts,
Avoid duplicate contacts.

Tools Required:
GCC Compiler,
Ubuntu

Compilation:
Open terminal inside the project folder and run:make

Exection:
After successful compilation, run:./phonebook.
After execution Menu will be displayed as follows:
------------------ MENU ------------------
c/C : Create a new contact
p/P : Print all contacts
d/D : Delete contact
f/F : Find contact
e/E : Edit contact
s/S : Save contacts to file
q/Q : Quit application
Based on menu user can choose any option to proceed.

Project Approach:
Used Singly Linked List to store contact information dynamically.
Implemented file handling for saving and loading data.
Implemented separate source files for each operation.
Used structures and typedefs for clean design.
Used Makefile for easy compilation.

Constraints & Rules:
Duplicate contact names are not allowed.
Each operation is implemented using user-defined functions.
Program follows modular programming approach.

Conclusion:
This Phone Book Application project helped me strengthen my core C programming skills by applying concepts such as structures, pointers, linked lists, and file handling in a real working application.
Through this project, I learned how to design a modular program, manage dynamic data, and store information permanently using files.
It also improved my problem-solving ability and gave me confidence to work on larger software and embedded C projects in the future.

Author: G Estheru Rani
