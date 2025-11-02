# Student Records (C structs demo)

[![C](https://img.shields.io/badge/C-Programming-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![GCC](https://img.shields.io/badge/GCC-Compiler-brightgreen.svg)](https://gcc.gnu.org/install/binaries.html)
[![VS Code](https://img.shields.io/badge/VS%20Code-Editor-blue.svg)](https://code.visualstudio.com/download)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## Table of Contents

- [Student Records (C structs demo)](#student-records-c-structs-demo)
  - [Table of Contents](#table-of-contents)
  - [Overview](#overview)
  - [Features](#features)
  - [Requirements](#requirements)
  - [Build and run](#build-and-run)
  - [Usage](#usage)
  - [Configuration](#configuration)
  - [Project structure](#project-structure)
  - [Troubleshooting](#troubleshooting)
  - [Contributing](#contributing)
  - [License](#license)
  - [Acknowledgments](#acknowledgments)

## Overview

A tiny, self-contained C program that demonstrates how to model and collect data with structs, perform bounded/safer input, and print a simple report. It prompts for a fixed number of students, each with a name, numeric ID, and grade, then echoes the results.

> File of interest: `structs.c`

## Features

- Student struct with name, number (ID), and grade fields
- Fixed-size array with a clear limit (`MAX_STUDENTS`)
- Bounded input using `scanf` with width specifiers to reduce overflow risk
- Basic input validation with early exit on error
- Minimal, portable C (no third-party dependencies)

## Requirements

- A C compiler (one of):
	- Windows: MinGW-w64 GCC recommended
	- macOS: Xcode Command Line Tools (clang) or Homebrew GCC
	- Linux: GCC or clang via your package manager

## Build and run

Pick the commands for your OS/shell.

- Windows (PowerShell):

```pwsh
# compile / build
gcc .\structs.c -o .\structs.exe

# run
.\structs.exe
```

- macOS/Linux (bash/zsh):

```bash
# compile / build
gcc ./structs.c -o ./structs

# run
./structs
```

If `gcc` isn’t found, install a compiler first (e.g., MinGW-w64 on Windows, Xcode CLT or Homebrew on macOS, or your Linux distro’s gcc package).

## Usage

The program will prompt you to enter details for each student in sequence. By default it expects `MAX_STUDENTS` entries (10):

- Name: up to 49 characters (full line, spaces allowed)
- Number: integer (e.g., 1001)
- Grade: up to 29 characters (e.g., A, B+, Pass, 85, etc.)

If any input step fails (e.g., typing non-numeric text for the number), the program prints an error message and exits.

**Example:**

```pwsh
Enter details for student no 1:
Name: Ada Lovelace
Number: 1001
Grade: A+

Enter details for student no 2:
Name: Alan Turing
Number: 1002
Grade: A

... (continues until MAX_STUDENTS are entered) ...

Student Exam Report:

Name: Ada Lovelace
Number: 1001
Grade: A+

Name: Alan Turing
Number: 1002
Grade: A

... (prints all students) ...
```

## Configuration

Adjust these constants at the top of `structs.c` to suit your needs:

- `MAX_STUDENTS` — number of students to capture (default 10)
- `NAME_LEN` — max name length + 1 for terminator (default 50)
- `GRADE_LEN` — max grade text length + 1 (default 30)

After changing these, rebuild the program.

## Project structure

```
structs.c        ← the program source
README.md        ← you are here
LICENSE
```

## Troubleshooting

- “gcc: command not found” or similar
	- Install a C toolchain and ensure it’s on your PATH (MinGW-w64 on Windows; Xcode CLT/Homebrew on macOS; gcc via package manager on Linux).
- Program exits early with “Input error …”
	- Ensure you provide an integer for “Number” and press Enter after each prompt.
	- The input is line-based for name/grade and integer-based for number; mixed input without newlines may confuse the scanner.

## Contributing
Contributions are welcome and appreciated! **Here are some ways you can contribute:**

 **Ideas for Contribution**
- Propose new features or improvements.
- Optimize performance or add additional functionality.
- Add more robust input validation and error handling.
- Implement unit tests for the Python script.
- Create a graphical user interface (GUI) for Bubble Sort (e.g., Tkinter/PyQt) or enhance the visualizer.
- Add support for additional languages.

 **Submit Pull Requests**
1. Fork the repository.
2. Create a feature branch: `git checkout -b feature/your-feature`.
3. Make your changes with clear, commented code.
4. Test thoroughly with different inputs.
5. Submit a pull request with a detailed description of your changes.

*Please ensure any code contributions maintain the existing style and include appropriate documentation.*

## License
This project is open source and available under the [MIT License](LICENSE).

## Acknowledgments
- **GCC Compiler**: For compiling the C program.
- **Python Software Foundation**: For providing the Python programming language.
- **Visual Studio Code**: For being an excellent code editor.

---
> **Note:** This README.md file was created with the help of AI. While every effort has been made to ensure accuracy and clarity, there may still be minor errors or inconsistencies. Users are encouraged to review the content carefully and make any necessary adjustments.

<div align="center">
  <p>Made with ❤️ by <a href="https://github.com/0PKunal">0PKunal</a></p>
  <p>If this project helped you, please give it a ⭐️</p>
</div>
