/*
 * Type Conversion in C++
 * Course: Computer Programming 1
 *
 * Type conversion changes a value from one data type to another.
 * This example covers:
 *   1. Implicit conversion (done automatically by the compiler)
 *   2. Explicit conversion (done by the programmer) using:
 *        a. static_cast (C++ named cast)
 *        b. C-style cast
 *        c. Function-style cast
 */

// ---------------------------------------------------------------
// 1. Implicit Type Conversion
// The compiler converts the value automatically. Here, double -> int.
// Warning: the decimal part is cut off (truncated), not rounded.
// ---------------------------------------------------------------
int num_int;
double num_double = 9.99;

// Assign the double value to an int variable
num_int = num_double;

// Print to see the result
cout << "num_double = " << num_double << endl;
cout << "num_int = " << num_int << endl;
// Output:
// num_double = 9.99
// num_int = 9

// ---------------------------------------------------------------
// 2a. Explicit Type Conversion: C++ Named Casts (static_cast)
// Recommended in C++ for standard conversions, such as float to int.
// Syntax: static_cast<new_type>(value)
// ---------------------------------------------------------------
float my_float = 3.14

// Convert float to int using static_cast
int my_int = static_cast<int>(my_float);
cout << "Float: " << my_float << "-> Int: " << my_int << endl;
// Output:
// Float: 3.14-> Int: 3

// ---------------------------------------------------------------
// 2b. Explicit Type Conversion: C-Style Type Casting
// The older style inherited from C, also called cast notation.
// Syntax: (new_type)value
// ---------------------------------------------------------------
int num_int = 26;
double num_double;

// int -> double (26 becomes 26.0)
num_double = (double)num_int;

// ---------------------------------------------------------------
// 2c. Explicit Type Conversion: Function-Style Casting
// Looks like a function call.
// Syntax: new_type(value)
// ---------------------------------------------------------------
num_double = double(num_int);
