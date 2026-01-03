# C Text Editor

A lightweight terminal-based text editor built from scratch in C, featuring syntax highlighting and efficient text manipulation.

## Features

- **Syntax Highlighting** - Color-coded display for C/C++ files
- **Search Functionality** - Incremental search with result highlighting
- **Efficient Rendering** - VT100 escape sequences for fast screen updates
- **File Operations** - Open, edit, and save files directly from the terminal
- **Keyboard Navigation** - Vim-inspired keybindings for text editing

## Tech Stack

- C (with standard library only)
- Raw terminal control (termios, VT100 escape sequences)
- No external dependencies

## Building and Running

```bash
# Compile
gcc -o editor editor.c -Wall -Wextra -pedantic -std=c99

# Run
./editor [filename]
```

## Usage

| Key | Action |
|-----|--------|
| `Ctrl-Q` | Quit |
| `Ctrl-S` | Save file |
| `Ctrl-F` | Find/search |
| Arrow keys | Navigate |

## Implementation Details

This editor implements a gap buffer for efficient text insertion and deletion, manages its own screen rendering without curses libraries, and handles raw terminal input for precise control over the editing experience.

## What I Learned

- Low-level terminal manipulation and control sequences
- Memory management and buffer handling in C
- State management for editor modes (normal/search)
- Trade-offs between different data structures for text storage

## Future Improvements

- [ ] Multiple file support with tabs
- [ ] Line numbers
- [ ] Extended syntax highlighting for more languages
- [ ] Undo/redo functionality