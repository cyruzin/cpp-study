# Preprocessors

As the name suggests Preprocessors are programs that process our source code before compilation. 
There are a number of steps involved between writing a program and executing a program in C / C++. 
Let us have a look at these steps before we actually start learning about Preprocessors.

Preprocessor programs provide preprocessors directives which tell the compiler to preprocess the source code before compiling. 
All of these preprocessor directives begin with a '#' (hash) symbol. The '#' symbol indicates that, whatever statement starts with #, 
is going to the preprocessor program, and preprocessor program will execute this statement. Examples of some preprocessor directives 
are: #include, #define, #ifndef etc. Remember that # symbol only provides a path that it will go to the preprocessor, and command such 
as include is processed by preprocessor program. For example, include will include extra code to your program. 
We can place these preprocessor directives anywhere in our program.

**There are 4 main types of preprocessor directives:**

- Macros
- File Inclusion
- Conditional Compilation
- Other directives

**Macros:** Macros are a piece of code in a program which is given some name. Whenever this name is encountered by the compiler the compiler 
replaces the name with the actual piece of code. The '#define' directive is used to define a macro. Let us now understand the macro 
definition with the help of a program:

**File Inclusion:** This type of preprocessor directive tells the compiler to include a file in the source code program. There are two types 
of files which can be included by the user in the program:

**Header File or Standard files:** These files contains definition of pre-defined functions like printf(), scanf() etc. 
These files must be included for working with these functions. Different function are declared in different header files. 
For example standard I/O functions are in 'iostream' file whereas functions which perform string operations are in 'string' file.

**Syntax:**

```cpp
#include <file_name>
```

Where file_name is the name of file to be included. The '<' and '>' brackets tells the compiler to look for the file in standard directory.

**User defined files:** When a program becomes very large, it is good practice to divide it into smaller files and include whenever needed. 
These types of files are user defined files. These files can be included as:

```cpp
#include "filename"
```

**Conditional Compilation:** Conditional Compilation directives are type of directives which helps to compile a specific portion of the program 
or to skip compilation of some specific part of the program based on some conditions. This can be done with the help of two preprocessing 
commands 'ifdef' and 'endif'.

**Syntax:**

```cpp

#ifdef macro_name
    statement1;
    statement2;
    statement3;
    .
    .
    .
    statementN;
#endif
```

If the macro with name as 'macroname' is defined then the block of statements will execute normally but if it is not defined, the compiler will 
simply skip this block of statements.

**Other directives:** Apart from the above directives there are two more directives which are not commonly used. These are:

**#undef Directive:** The #undef directive is used to undefine an existing macro. This directive works as:

```cpp
#undef LIMIT
```

Using this statement will undefine the existing macro LIMIT. After this statement every '#ifdef LIMIT' statement will evaluate to false.

**#pragma Directive:** This directive is a special purpose directive and is used to turn on or off some features. This type of directives are 
compiler-specific, i.e., they vary from compiler to compiler. Some of the #pragma directives are discussed below:

**#pragma startup** and **#pragma exit**: These directives helps us to specify the functions that are needed to run before program startup 
(before the control passes to main()) and just before program exit (just before the control returns from main()).

**#pragma warn Directive**: This directive is used to hide the warning message which are displayed during compilation.

We can hide the warnings as shown below:

**#pragma warn -rvl**: This directive hides those warning which are raised when a function which is supposed to return a value does not returns a value.

**#pragma warn -par**: This directive hides those warning which are raised when a function does not uses the parameters passed to it.

**#pragma warn -rch**: This directive hides those warning which are raised when a code is unreachable. For example: any code written after 
the return statement in a function is unreachable.
