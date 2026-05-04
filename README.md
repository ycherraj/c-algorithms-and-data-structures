# Libft — Reimplementation of the C Standard Library in Pure C

## 💡 Overview
**Libft** is a comprehensive, custom-built static C library that reimplements essential components of the standard C library (`<string.h>`, `<stdlib.h>`, etc.), alongside a robust set of utility functions. 

Built completely from scratch, this project demonstrates a deep, under-the-hood understanding of system memory, pointers manipulation, and algorithmic efficiency in a low-level environment.

## 🛠️ Technical Competencies Demonstrated
* **Low-Level Memory Management:** Direct manipulation using pointers and dynamic memory allocation (`malloc`, `free`).
* **Algorithmic Problem Solving:** Recreating standard string processing and memory manipulation algorithms with optimal time and space complexities.
* **Build Systems:** Managing compilation rules, dependencies, and static library generation using `Makefile`.
* **Clean Code:** Writing highly modular, reusable, and norm-compliant C code.

---

## 📦 Architecture & Contents

The library is organized into two core modules:

### 1. Memory & String Manipulation (Libc equivalents)
Re-engineered versions of foundational standard C functions:
* **Memory:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`.
* **Strings:** `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`.
* **Character Checks/Conv:** `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`, `atoi`.

### 2. Extended Utilities
Custom functions designed to streamline string and memory parsing:
* `ft_substr` - Extracts a substring from a string.
* `ft_strjoin` - Concatenates two strings into a new memory space.
* `ft_split` - Splits a string into a 2D array based on a delimiter.
* `ft_itoa` - Converts an integer to a string.
* `ft_strmapi` / `ft_striteri` - Applies a function to each character of a string.
* **File Descriptors:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

---

## 🚀 Getting Started

### Compilation
The library is built using a `Makefile`. Run the following command at the root of the repository to compile the core functions:

```bash
make
```

**Other available rules:**
* `make clean` — Removes temporary object (`.o`) files.
* `make fclean` — Removes object files and the compiled `libft.a`.
* `make re` — Recompiles the entire library from scratch.

### Integration
To use **Libft** in your own C projects, include the header file:

```c
#include "libft.h"
```

Compile your source code alongside the static library:

```bash
gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program
```