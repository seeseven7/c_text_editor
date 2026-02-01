# C Text Editor

A lightweight terminal-based text editor built from scratch in C, featuring syntax highlighting and efficient text manipulation.

## Tech Stack

- C (with standard library only)
- Raw terminal control
- No external dependencies

## Running

```bash
# Compile
gcc -o kilo kilo.c -Wall -Wextra -pedantic -std=c99

# Run
./kilo
```

## Implementation

This editor uses raw terminal control (termios) and VT100 escape sequences for rendering, implementing a custom buffer management system for efficient text insertion and deletion. Built following the [Build Your Own Text Editor](https://viewsourcecode.org/snaptoken/kilo/) tutorial with personal modifications.

## What I Learned

- Low-level terminal manipulation and control sequences
- Memory management and buffer handling in C
- State management for different editor modes
- Trade-offs between different data structures for text storage