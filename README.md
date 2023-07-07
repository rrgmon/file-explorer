# ls Command Recreation in C++

This project aims to recreate the functionality of the 'ls' Unix command using C++. It provides a simple and intuitive way to list files and directories in the present working directory (PWD), along with their respective sizes. The program utilizes the `std::filesystem` library for efficient file system operations.

## Usage
To use the program, follow these steps:
1. Execute the 'make' command to build the executable.
2. Run './myls' to launch the program.
3. To make it a universal terminal command, move the 'myls' executable to '/usr/local/bin' using the command `sudo mv myls /usr/local/bin/`.
Now you can access the 'myls' command from any directory by simply typing 'myls'.

## Features

- **File and Directory Listing**: The program lists files and directories in the PWD, providing an overview of the contents.
- **File Size Information**: It also displays the size of each individual file, allowing for easy identification of large or small files.

## TODOs
While the current version of the program provides basic functionality, there are areas for improvement and expansion:

- **Enhanced Visual Presentation**: Improve the output formatting to enhance readability and visual appeal.
- **Additional Command Options**: Implement additional options to mimic the existing functionality of the 'ls' command, offering more flexibility and versatility.

