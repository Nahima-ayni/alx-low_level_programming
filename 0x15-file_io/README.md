Creating, Opening, Closing, Reading, and Writing Files:

Use open to create or open a file.
Use close to close a file when done.
Use read to read data from a file.
Use write to write data to a file.
File Descriptors:

File descriptors are small integers representing open files.
They are used to uniquely identify open files in a process.

Standard File Descriptors (POSIX names):

0 (STDIN_FILENO): Standard input (usually keyboard).
1 (STDOUT_FILENO): Standard output (usually screen).
2 (STDERR_FILENO): Standard error output (usually screen).
I/O System Calls (open, close, read, write):

Use open to create or open a file with a specified mode.
Use close to release resources associated with a file.
Use read to read data from a file into a buffer.
Use write to write data from a buffer to a file.

Flags O_RDONLY, O_WRONLY, O_RDWR:

O_RDONLY: Open file for reading.
O_WRONLY: Open file for writing.
O_RDWR: Open file for both reading and writing.

File Permissions (open system call):

Use the open system call with additional flags to set file permissions.
Permissions are represented as octal values, e.g., 0644.
System Call:

A system call is a request to the kernel for a specific service or operation.
It bridges the user-space application with the kernel to perform privileged tasks.
Function vs. System Call:

A function is a self-contained piece of code within a program.
A system call is an interface to request services from the kernel and is used to perform low-level operations.
In summary, file I/O involves creating, opening, closing, reading, and writing files using file descriptors. File permissions can be set using the open system call. Standard file descriptors (STDIN, STDOUT, STDERR) represent input and output channels. System calls are requests to the kernel, bridging user and kernel space, whereas functions are self-contained code within a program.





