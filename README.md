# configReader
A simple configReader project for Advance Computer Science

Advanced CS

Lab 7

In this lab, you will learn about three major concepts in C: function pointers, void pointers, and unions.

You will be implementing a simple config file reader called configRead.c. The purpose of this program

is to read a config file that defines a set of variables, and acts on those variables based off a function

that can be defined by the user.

PART ONE: READING THE CONFIG FILE

The config file your program will be reading will have the following syntax:

<NAME>=<VALUE>

The <NAME> field will always be in all-caps. The <VALUE> field can be one of three data types:

integer, floating point, or string. Your program will need to parse this file and store both the name and

its corresponding value in memory. To store this information, you will need to create a few different

• You should use an enum to define the three possible data types as constants for reference later.

• You should use a union as the place to store the actual value, whatever data type it may be.

• You should use a struct as the representation of a single entry in the config file. This struct

should contain a type as defined by your enum, and an instance of your union to store the data.

Your program should have an array of entry structs to store the data from the config file as you read it

data structures:

This struct should be called entry.

in line-by-line. The config files will never have more than 50 lines.

Within configRead.c, you will need to write a function called process that, for each variable defined by

PART TWO: USING THE INFORMATION

the config file, will print the following:

Name: Type: Value:

<name> <type> <value>

You must use a function pointer to call this function. When I grade your lab, I will modify your code to

call other processing functions that I have written. I should only have to change one line in your

code(the assignment of your function pointer) to make that happen. All processing functions will take

as an argument the array of entry structs you have created, along with a void pointer called state that

can be used to define extra behavior. All processing functions will return another array of entry structs

that reflects any modifications the process function may have made to that array(e.g. sorting). For your

process function, you should treat the state variable like an integer: if it is set to zero, you should print

the contents of the array in normal ascending order and return the same array that was passed in. If

state is not equal to zero, you should print the contents of the array in reverse order, and return the

When you are done, place your code and your Makefile into a tarball and send it to the instructor via

email at aryker@purdue.edu. This lab is due by 11:59 PM on Monday, March 2nd 2015.

array in reverse. Your program must have a Makefile.
