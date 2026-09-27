# C Calculator

A simple command-line calculator developed in **C** as part of my journey to learn the C programming language.

The project focuses on practicing fundamental C concepts such as functions, pointers, input validation, strings, modular programming, and compiling multiple source files.

## Features

* Addition
* Subtraction
* Multiplication
* Division
* Input validation
* Division-by-zero validation
* Interactive command-line menu
* Option to perform multiple calculations
* Modular source code organization

## Project Structure

```text
c-calculator/
├── include/
│   └── calculator.h
├── src/
│   └── calculator.c
├── main.c
├── .gitignore
└── LICENSE
```

## Technologies

* **C**
* **GCC**
* **Git**
* **GitHub**

## Concepts Practiced

This project was built to practice:

* Variables and data types
* Functions
* Pointers
* Conditional statements
* Loops
* `switch`
* Arrays and strings
* User input with `fgets()`
* Input conversion with `strtod()` and `strtol()`
* String manipulation
* Header files
* Include guards
* Modular programming
* Compiling multiple `.c` files
* Basic input validation

## Compilation

Make sure you have **GCC** installed.

From the project root, compile the program with:

```bash
gcc main.c src/calculator.c -I include -o calculadora
```

Then run it:

### Windows

```bash
./calculadora.exe
```

### Linux / macOS

```bash
./calculadora
```

## Example

```text
========================================
       Bienvenido a la calculadora
========================================

1. Sumar
2. Restar
3. Multiplicar
4. Dividir
5. Salir

Seleccione una opción:
```

## Purpose

This is a learning project created to strengthen my understanding of **C programming fundamentals** and develop better programming habits without relying entirely on frameworks or abstractions.

It is part of a larger series of C projects where the difficulty will progressively increase.

## Author

**Ángel Andrés García Arroyo**

* GitHub: [@KaliGa70](https://github.com/KaliGa70)
* LinkedIn: [KaliGa70](https://www.linkedin.com/in/kaliga70)

## License

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for more information.
