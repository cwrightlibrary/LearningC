This repository structure is designed to follow the **CS50x 2026** curriculum for the first 6 modules (Weeks 0-5). It focuses on conceptual notes, lecture code-alongs, and placeholders for assignments to keep your workspace organized without spoiling the solutions.

### Repository Structure

```text
cs50-learning-c/
├── .gitignore
├── Makefile
├── README.md
├── week0-scratch/
│   ├── README.md
│   └── project-link.txt
├── week1-c/
│   ├── notes.md
│   ├── lecture/
│   │   ├── hello.c
│   │   └── compare.c
│   └── pset1/
│       ├── hello/
│       ├── mario-less/
│       └── credit/
├── week2-arrays/
│   ├── notes.md
│   ├── lecture/
│   │   ├── scores.c
│   │   └── uppercase.c
│   └── pset2/
│       ├── readability/
│       └── caesar/
├── week3-algorithms/
│   ├── notes.md
│   ├── lecture/
│   │   ├── search.c
│   │   └── phonebook.c
│   └── pset3/
│       ├── plurality/
│       └── runoff/
├── week4-memory/
│   ├── notes.md
│   ├── lecture/
│   │   ├── addresses.c
│   │   ├── copy.c
│   │   └── swap.c
│   └── pset4/
│       ├── filter-less/
│       └── recover/
└── week5-data-structures/
    ├── notes.md
    ├── lecture/
    │   ├── list.c
    │   └── tree.c
    └── pset5/
        └── speller/

```

---

### File Contents

#### 1. `.gitignore`

Prevents compiled binary files (which C creates) from being uploaded to GitHub.

```ignore
# Ignore compiled binaries
*.out
*
!*/
!*.c
!*.h
!*.md
!*.txt
!Makefile
!.gitignore

```

#### 2. `Makefile`

A simple automation file so you can type `make hello` instead of long clang commands.

```makefile
CC := clang
CFLAGS := -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow
LDLIBS := -lcs50 -lm

# This allows you to compile any .c file in any subdirectory
%: %.c
	$(CC) $(CFLAGS) $< $(LDLIBS) -o $@

```

#### 3. `README.md` (Root)

```markdown
# CS50x 2026: Introduction to Programming with C

My journey through the first 6 weeks of Harvard's CS50x. 

## Progress
- [ ] Week 0: Scratch (Computational Thinking)
- [ ] Week 1: C (Syntax & Data Types)
- [ ] Week 2: Arrays (Memory Layout)
- [ ] Week 3: Algorithms (Efficiency & Big O)
- [ ] Week 4: Memory (Pointers & Hexadecimal)
- [ ] Week 5: Data Structures (Linked Lists, Trees, Hash Tables)

## How to use
To compile a program (requires `libcs50`):
`make filename`

```

#### 4. `week1-c/notes.md`

(Follow this template for all weeks)

```markdown
# Week 1: C

## Key Concepts
- **Compiling**: Source Code -> Machine Code (Preprocessing, Compiling, Assembling, Linking).
- **Types**: `int`, `char`, `float`, `double`, `long`, `string`.
- **Conditionals**: `if`, `else if`, `else`, `switch`.
- **Loops**: `while`, `for`, `do while`.

## CLI Commands
- `ls`: List files
- `mkdir`: Make directory
- `cd`: Change directory
- `rm`: Remove file

```

#### 5. `week4-memory/lecture/addresses.c`

Example of a lecture code-along file.

```c
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    // Print the value of n
    printf("%i\n", n);

    // Print the address of n via the pointer
    printf("%p\n", p);

    // Dereference the pointer to see the value
    printf("%i\n", *p);
}

```

#### 6. `week5-data-structures/notes.md`

Focusing on the transition from fixed memory to dynamic memory.

```markdown
# Week 5: Data Structures

## Data Structures Covered:
1. **Queues**: FIFO (First In, First Out).
2. **Stacks**: LIFO (Last In, First Out).
3. **Linked Lists**: Dynamic memory allocation using `nodes` and pointers.
4. **Trees**: Hierarchical structures (Binary Search Trees).
5. **Hash Tables**: Combination of arrays and linked lists for $O(1)$ search.
6. **Tries**: Prefix trees for dictionary lookups.

## Key Functions
- `malloc()`: Allocate memory.
- `free()`: Release memory (Crucial to avoid memory leaks!).

```

### Setup Instructions for your GitHub Repo:

1. **Local environment**: If you aren't using the CS50 Codespace, you will need to install the `libcs50` library locally to use `get_string` and `get_int`.
2. **Commit often**: Commit after every lecture code-along and every time you pass a `check50` requirement for a problem set.
3. **Private vs Public**: Harvard's academic honesty policy allows you to keep your code in a repository, but they prefer you keep solutions private if you are seeking a certificate. Use a private repo and a public "Notes" repo if you want to showcase your learning.