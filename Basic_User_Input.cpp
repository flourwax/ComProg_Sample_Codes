/*
 * Input and Output in C++
 * Course: Computer Programming 1
 *
 * This example covers:
 *   - cout              : displays output on the screen
 *   - cin               : reads a single word (stops at a space)
 *   - getline(cin, var) : reads a whole line, including spaces
 *
 * It ends with two practice activities for students.
 */

// ---------------------------------------------------------------
// Example: Displaying output and reading input
// ---------------------------------------------------------------

// Display a message. endl moves the cursor to the next line.
cout << "Hello World!" << endl;

string name;
string fullname;

// Ask for a single word and read it using cin
cout << "What's yuour name: ";
cin >> name;
cout << endl;

// cin leaves the Enter key (newline) in the input buffer.
// cin.ignore() removes it so getline() does not read an empty line.
cin.ignore(); // this is to clear the buffer before using getline() from using cin

// Ask for a full name and read the whole line (spaces included)
cout << "What's your fullname: ";
getline(cin, fullname);

// ---------------------------------------------------------------
// Practice Activity 1: Sum of Two Numbers
// Task: Write a program that asks for two numbers and displays their sum.
// ---------------------------------------------------------------
int first_num;
int second_num;
int sum;

// TODO: Use cout and cin to ask the user for the two values

// Add the numbers
sum = first_num + second_num;

// TODO: Use cout again to print the sum

// ---------------------------------------------------------------
// Practice Activity 2: Student Enrollment Information
// Task: Consider an enrollment form. Ask the student for their
// personal information, then display it.
// ---------------------------------------------------------------
int id;
string fullname;
string course;
int year;

// TODO: Print a prompt and read each value (id, full name, course, year)

// TODO: Print all the information back to the user
