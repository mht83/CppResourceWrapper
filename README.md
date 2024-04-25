# C++ Resource Wrapper

## Overview
This repository contains a simple C++ class named `SimpleHandle` that demonstrates basic resource management in C++. It encapsulates a `FILE*` handle and ensures proper opening and closing of the file resource.

## Features
- **Resource Acquisition Is Initialization (RAII)**: The `SimpleHandle` class follows the RAII principle, acquiring a file resource in the constructor and releasing it in the destructor.
- **Move Semantics**: Implements move constructor to transfer ownership of the file handle, ensuring no resource leaks.
- **Safety Checks**: Includes checks to ensure that file operations are successful and handles errors gracefully.

## Requirements
C++11 or higher due to the use of move semantics.

## Contributing
Contributions to improve the SimpleHandle class are welcome. Please feel free to fork the repository, make changes, and submit a pull request.

## Acknowledgments
Written by mht83
