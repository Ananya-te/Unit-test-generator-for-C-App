# Unit-test-generator-for-C-App
## C++ Test Generator with GoogleTest

This project demonstrates unit testing in C++ using the [GoogleTest](https://github.com/google/googletest) framework. It includes test cases for basic arithmetic functions (`add` and `subtract`) along with coverage reporting and compilation via MinGW-w64.

## Project Structure
cpp-test-gen/
│
├── src/ # Source code (functions to test)
│ └── my_functions.cpp
│ └── my_functions.h
│
├── tests/ # Test cases using GoogleTest
│ └── test_main.cpp
│
├── coverage/ # Coverage artifacts (optional)
│
├── test_bin.exe # Compiled test binary
├── coverage_report.txt # Text-based test coverage summary
├── README.md # Project documentation
└── build_logs/ # Optional logs/output files

## Features
- Unit tests for `add()` and `subtract()` functions
- Covers positive, negative, mixed sign, and zero input cases
- Built and tested using `g++` from MinGW-w64 (GCC 15.1.0)
- Test automation using GoogleTest
- Clean and readable test report
- Compatible with Windows (MSYS2 or UCRT shell)

## Building & Running Tests
### 1.Prerequisites
- **MinGW-w64** with GCC ≥ 13+ (Recommended: 15.1.0)
- **GoogleTest** source code (downloaded manually)
- Windows terminal (preferably MSYS2/UCRT64 or PowerShell)
**Steps**
# 1. Open terminal and navigate to the project folder
cd /c/Users/KIIT/Desktop/abc/cpp-test-gen

### 2. Compile the tests
g++ -std=c++17 \
    tests/test_main.cpp \
    src/my_functions.cpp \
    -o test_bin.exe \
    -I"C:/mingw64/include" \
    -L"C:/mingw64/lib" \
    -lgtest -lgtest_main -lpthread

### 3. Run the test binary
./test_bin.exe


# Test Coverage
A text-based summary of test coverage is included in:
 Coverage_report.txt

To generate line-by-line coverage in the future:
g++ -fprofile-arcs -ftest-coverage ...
gcov src/my_functions.cpp


# Dependencies
GoogleTest (Header + source build)
MinGW-w64 with GCC 15.1.0 or higher

# Contributing
Feel free to fork and contribute test cases, improvements, or CI integration. Pull requests are welcome!



