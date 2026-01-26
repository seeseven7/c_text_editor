# C Text Editor

A lightweight terminal-based text editor built from scratch in C.

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

## What I Learned

- Low-level terminal manipulation and control sequences
- Memory management and buffer handling in C
- Trade-offs between different data structures for text storage

## Future Improvements

- [ ] Multiple file support with tabs
- [ ] Line numbers
- [ ] Syntax highlighting for more languages
- [ ] Undo/redo functionality