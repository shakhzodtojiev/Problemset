# Programming Problemset - Complete Guide

## Overview

This repository contains comprehensive programming examples covering 10 fundamental topics across 6 different programming languages. Each topic demonstrates practical implementations, best practices, and language-specific idioms.

---

## Supported Languages

### 1. C

**Version:** C99 or later
**File Extension:** `.c`

**Installation:**

- **macOS:** `brew install gcc`
- **Linux:** `sudo apt-get install gcc`
- **Windows:** Install MinGW or MSVC

**Compilation:**

```bash
gcc -o program_name filename.c
./program_name
```

**Key Characteristics:**

- Low-level memory manipulation with pointers
- Procedural programming paradigm
- Efficient and portable
- No built-in OOP features

---

### 2. C++

**Version:** C++11 or later
**File Extension:** `.cpp`

**Installation:**

- **macOS:** `brew install gcc` or use Clang (built-in)
- **Linux:** `sudo apt-get install g++`
- **Windows:** Install MinGW-w64 or MSVC

**Compilation:**

```bash
g++ -o program_name filename.cpp
./program_name
```

**Key Characteristics:**

- Superset of C with Object-Oriented Programming
- Standard Template Library (STL) for data structures
- Memory management with smart pointers
- Template metaprogramming support

---

### 3. Python

**Version:** Python 3.7 or later
**File Extension:** `.py`

**Installation:**

- **macOS:** `brew install python3`
- **Linux:** `sudo apt-get install python3`
- **Windows:** Download from python.org

**Execution:**

```bash
python3 filename.py
```

**Key Characteristics:**

- Interpreted language with dynamic typing
- Concise and readable syntax
- Extensive standard library
- Great for rapid prototyping and data science

---

### 4. Go

**Version:** Go 1.15 or later
**File Extension:** `.go`

**Installation:**

- **macOS:** `brew install go`
- **Linux:** `sudo apt-get install golang-go`
- **Windows:** Download from golang.org

**Compilation & Execution:**

```bash
go run filename.go          # Run directly
go build filename.go        # Create executable
./filename                  # Run executable
```

**Key Characteristics:**

- Modern systems programming language
- Built-in concurrency with goroutines
- Fast compilation and execution
- Simplicity and clarity prioritized

---

### 5. Java

**Version:** Java 11 or later
**File Extension:** `.java`

**Installation:**

- **macOS:** `brew install openjdk`
- **Linux:** `sudo apt-get install openjdk-11-jdk`
- **Windows:** Download from oracle.com or adoptopenjdk.net

**Compilation & Execution:**

```bash
javac ClassName.java        # Compile (creates .class file)
java ClassName              # Run
```

**Key Characteristics:**

- Strongly-typed with object-oriented design
- "Write once, run anywhere" (JVM)
- Rich ecosystem and frameworks
- Excellent for enterprise applications

---

### 6. Rust

**Version:** Rust 1.50 or later
**File Extension:** `.rs`

**Installation:**

- **All Platforms:** `curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh`

**Compilation & Execution:**

```bash
rustc filename.rs           # Compile
./filename                  # Run
```

**Key Characteristics:**

- Memory safety without garbage collection
- Ownership and borrowing system
- Zero-cost abstractions
- Prevents data races at compile time

---

## Topics Covered

### 1. Hello World

Introduction to basic output in each language.

**Key Concepts:**

- Program structure
- Print/output functions
- Compilation/execution process

---

### 2. Variables and Data Types

Understanding type systems and variable declaration.

**Topics:**

- Primitive data types (int, float, bool, char, string)
- Variable declaration and initialization
- Type casting and conversions
- Constants and immutability

---

### 3. Control Flow

Conditional statements and loops.

**Topics:**

- if/else statements
- switch cases
- for loops
- while and do-while loops
- break and continue statements

---

### 4. Functions

Function definition and usage.

**Topics:**

- Function declaration and definition
- Parameters and return values
- Scope and lifetime
- Function overloading (where applicable)
- Default parameters

---

### 5. Arrays and Collections

Working with data collections.

**Topics:**

- Array declaration and initialization
- Multi-dimensional arrays
- Array indexing and iteration
- Language-specific collections:
  - **C:** Arrays with pointers
  - **C++:** Vectors (dynamic arrays)
  - **Python:** Lists, tuples, dictionaries
  - **Go:** Slices and arrays
  - **Java:** Arrays and ArrayList
  - **Rust:** Vectors and arrays

---

### 6. Strings

String manipulation and processing.

**Topics:**

- String declaration and initialization
- String methods and operations
- String concatenation
- String parsing and formatting
- Character encoding

---

### 7. Classes and Object-Oriented Programming

Structures and OOP concepts.

**Topics:**

- Class/struct definition
- Constructors and destructors
- Methods and properties
- Inheritance and polymorphism
- Encapsulation and access modifiers

---

### 8. Exception Handling

Error handling mechanisms.

**Topics:**

- Try-catch-finally blocks
- Custom exceptions
- Error handling best practices
- Language-specific error types:
  - **C:** Error codes and errno
  - **Go:** Error values and error interface
  - **Rust:** Result and Option types

---

### 9. File I/O

Reading and writing files.

**Topics:**

- Opening and closing files
- Reading and writing operations
- File modes (read, write, append)
- Working with directories
- Error handling for file operations

---

### 10. Recursion

Recursive function calls and backtracking.

**Topics:**

- Base cases and recursive cases
- Tail recursion
- Backtracking algorithms
- Tree traversal
- Permutations and combinations

---

### 11. Sorting and Searching

Common algorithms for organizing and finding data.

**Topics:**

- Sorting algorithms:
  - Bubble sort (O(n²))
  - Quick sort (O(n log n))
  - Merge sort (O(n log n))
  - Selection sort (O(n²))
- Searching algorithms:
  - Linear search (O(n))
  - Binary search (O(log n))
  - Interpolation search

---

## File Structure

```
Problemset/
├── README.md
├── GUIDE.md (this file)
├── c/
│   ├── hello_world.c
│   ├── variables_and_types.c
│   ├── control_flow.c
│   ├── functions.c
│   ├── arrays_and_pointers.c
│   ├── strings.c
│   ├── structures.c
│   ├── exception_handling.c (via errno)
│   ├── file_io.c
│   ├── recursion.c
│   └── sorting_and_searching.c
├── cpp/
│   ├── hello_world.cpp
│   ├── variables_and_types.cpp
│   ├── control_flow.cpp
│   ├── functions.cpp
│   ├── arrays_and_vectors.cpp
│   ├── strings.cpp
│   ├── classes_and_oop.cpp
│   ├── exception_handling.cpp
│   ├── file_io.cpp
│   ├── recursion.cpp
│   └── sorting_and_searching.cpp
├── python/
│   ├── hello_world.py
│   ├── variables_and_types.py
│   ├── control_flow.py
│   ├── functions.py
│   ├── data_structures.py
│   ├── strings.py
│   ├── classes_and_oop.py
│   ├── exception_handling.py
│   ├── file_io.py
│   ├── recursion.py
│   └── sorting_and_searching.py
├── go/
│   ├── hello_world.go
│   ├── variables_and_types.go
│   ├── control_flow.go
│   ├── functions.go
│   ├── arrays_and_slices.go
│   ├── strings_and_maps.go
│   ├── structs_and_interfaces.go
│   ├── error_handling.go
│   ├── file_io.go
│   ├── recursion.go
│   └── sorting_and_searching.go
├── java/
│   ├── HelloWorld.java
│   ├── variables_and_types.java
│   ├── control_flow.java
│   ├── Methods.java
│   ├── arrays_and_collections.java
│   ├── Strings.java
│   ├── classes_and_inheritance.java
│   ├── exception_handling.java
│   ├── file_io.java
│   ├── Recursion.java
│   └── SortingAndSearching.java
└── rust/
    ├── hello_world.rs
    ├── variables_and_types.rs
    ├── control_flow.rs
    ├── functions.rs
    ├── collections.rs
    ├── strings_and_ownership.rs
    ├── structs_and_impl.rs
    ├── error_handling.rs
    ├── file_io.rs
    ├── recursion.rs
    └── sorting_and_searching.rs
```

---

## Getting Started

### Quick Start Guide

1. **Clone or navigate to the repository:**

   ```bash
   cd /path/to/Problemset
   ```

2. **Choose a language and topic:**

   ```bash
   cd c/                          # or cpp, python, go, java, rust
   ```

3. **Run the example:**

   ```bash
   # For C
   gcc -o hello hello_world.c && ./hello

   # For C++
   g++ -o hello hello_world.cpp && ./hello

   # For Python
   python3 hello_world.py

   # For Go
   go run hello_world.go

   # For Java
   javac HelloWorld.java && java HelloWorld

   # For Rust
   rustc hello_world.rs && ./hello_world
   ```

---

## Learning Paths

### Beginner (No Programming Experience)

1. Start with **Python** (easiest syntax)
2. Learn basic concepts: Hello World → Variables → Control Flow → Functions
3. Move to **C** for understanding memory and pointers

### Intermediate (Some Programming Experience)

1. Start with **C++** (combines multiple paradigms)
2. Learn about OOP: Classes → Inheritance → Polymorphism
3. Explore **Go** for modern systems programming concepts

### Advanced (Strong Programming Background)

1. Dive into **Rust** for memory safety concepts
2. Study **C** for low-level programming details
3. Explore advanced topics: Recursion → Sorting/Searching Algorithms

---

## Comparison Table

| Feature               | C                 | C++                   | Python            | Go            | Java            | Rust                  |
| --------------------- | ----------------- | --------------------- | ----------------- | ------------- | --------------- | --------------------- |
| **Type System**       | Static            | Static                | Dynamic           | Static        | Static          | Static                |
| **Compilation**       | Compiled          | Compiled              | Interpreted       | Compiled      | Compiled        | Compiled              |
| **OOP**               | No                | Yes                   | Yes               | Partial       | Yes             | Partial               |
| **Memory Management** | Manual            | Manual/Smart Pointers | Automatic         | Automatic     | Automatic (GC)  | Automatic (Ownership) |
| **Speed**             | Very Fast         | Very Fast             | Slow              | Fast          | Moderate        | Very Fast             |
| **Learning Curve**    | Steep             | Moderate              | Easy              | Moderate      | Moderate        | Steep                 |
| **Use Cases**         | Systems, Embedded | Systems, Games        | Data Science, Web | Cloud, DevOps | Enterprise, Web | Systems, Blockchain   |

---

## Common Tasks

### Compile and Run All Examples in a Language

**C:**

```bash
cd c/
for file in *.c; do
    gcc -o "${file%.c}" "$file" && "./${file%.c}"
done
```

**C++:**

```bash
cd cpp/
for file in *.cpp; do
    g++ -o "${file%.cpp}" "$file" && "./${file%.cpp}"
done
```

**Python:**

```bash
cd python/
for file in *.py; do
    python3 "$file"
done
```

**Go:**

```bash
cd go/
for file in *.go; do
    go run "$file"
done
```

**Java:**

```bash
cd java/
for file in *.java; do
    javac "$file" && java "${file%.java}"
done
```

**Rust:**

```bash
cd rust/
for file in *.rs; do
    rustc -o "${file%.rs}" "$file" && "./${file%.rs}"
done
```

---

## Best Practices

1. **Code Comments:** Each file includes English comments explaining key concepts
2. **Practical Examples:** Real-world use cases and patterns
3. **Error Handling:** Demonstrates proper error handling techniques
4. **Style Consistency:** Follows language-specific conventions and best practices
5. **Documentation:** Clear variable names and function descriptions

---

## Resources for Further Learning

### Official Documentation

- **C:** [C Reference (cppreference.com)](https://en.cppreference.com/w/c)
- **C++:** [C++ Reference (cppreference.com)](https://en.cppreference.com/w/cpp)
- **Python:** [Python Documentation](https://docs.python.org/3)
- **Go:** [Go Documentation](https://golang.org/doc)
- **Java:** [Java Documentation](https://docs.oracle.com/javase)
- **Rust:** [Rust Book](https://doc.rust-lang.org/book)

### Online Platforms

- **LeetCode:** Algorithm practice across multiple languages
- **HackerRank:** Coding challenges and language tutorials
- **Codewars:** Gamified coding exercises
- **Project Euler:** Mathematical programming problems

---

## Tips for Effective Learning

1. **Start Simple:** Begin with Hello World to understand structure
2. **Modify Examples:** Change values, add features to understand behavior
3. **Compare Languages:** Look at the same topic across languages
4. **Practice Regularly:** Consistent practice improves retention
5. **Debug Systematically:** Use print statements or debuggers to trace execution
6. **Read Others' Code:** Study different approaches and patterns
7. **Build Projects:** Combine multiple concepts into real applications

---

## Troubleshooting

### Compilation Errors

**C/C++:**

- Ensure compiler is installed: `gcc --version` or `g++ --version`
- Check for syntax errors (missing semicolons, brackets)
- Verify file includes correct headers

**Java:**

- Class name must match filename (case-sensitive)
- Ensure JDK (not JRE) is installed: `javac -version`
- Check for import statement issues

**Go:**

- Package name must be `main` for executables
- Function names starting with uppercase are exported
- Run with `go run` before `go build`

**Rust:**

- Check Rust installation: `rustc --version`
- Review borrow checker errors carefully
- Ensure proper ownership and borrowing patterns

**Python:**

- Ensure Python 3 is used: `python3 --version`
- Check for indentation errors (Python is whitespace-sensitive)
- Verify module imports are available

---

## File Organization Notes

- **Naming Convention:** Topic-based names without numeric prefixes
- **Language Directories:** Organized by language for easy navigation
- **Consistency:** Similar structure across all languages for comparison
- **Comments:** All code includes English comments for clarity

---

## Version Information (Tested With)

- **C:** GCC 9.x / Clang 10.x
- **C++:** G++ 9.x / Clang++ 10.x (C++11 or later)
- **Python:** Python 3.8 - 3.11
- **Go:** Go 1.15 - 1.21
- **Java:** OpenJDK 11 - 21
- **Rust:** Rust 1.50+

---

## Contributing & Modifications

Feel free to:

- Modify examples to test different approaches
- Add additional implementations
- Create new topics following the existing pattern
- Share improvements and optimizations

---

## Summary

This Problemset provides a comprehensive foundation for learning programming fundamentals across 6 different languages. Each topic builds on core concepts, allowing learners to understand programming paradigms and compare how different languages approach similar problems.

Start with your preferred language, explore each topic progressively, and don't hesitate to compare implementations across languages to deepen your understanding.

**Happy Learning!** 🚀

---

_Last Updated: January 2026_
_Repository: Programming Problemset - Educational Resource_
