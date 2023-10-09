                                preprocessor:

- A preprocessor is a program that processes the source code before it is compiled, allowing the source code to expand macros, include other files, and conditionally compile blocks of source code³.
- Preprocessor directives are commands that start with a # symbol and tell the preprocessor what to do. For example, #include, #define, #ifdef, etc.
- Macros are pieces of code that are given a name and can be replaced by the preprocessor wherever they are used. Macros can be defined using the #define directive and undefined using the #undef directive. Macros can also be function-like, meaning they can take arguments and perform operations on them.
- File inclusion is the process of inserting the contents of another file into the source code. This can be done using the #include directive, which can take either angle brackets (<>) or double quotes ("") as delimiters. Angle brackets are used for system header files, while double quotes are used for user-defined header files.
- Conditional compilation is the process of including or excluding a block of code based on some condition. This can be done using the #if, #ifdef, #ifndef, #else, #elif, and #endif directives. These directives can be used to check whether a macro is defined or not, or to evaluate a constant expression.
- Other directives are those that do not fall into any of the above categories. Some examples are #error, which displays an error message and stops compilation; #pragma, which provides additional information to the compiler; and #line, which changes the current line number and filename