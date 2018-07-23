"Fillit is a project that let you discover and/or familiarize yourself with a recurring
problematic in programming: searching the optimal solution among a huge set of possibilities,
in a respectable timing. In this particular project, you will have to find a way to
assemble a given Tetriminos set altogether in the smallest possible square.
A Tetriminos is a 4-blocks geometric figure you probably already heard of, thanks to
the popular game Tetris."

Instructions:

* Allowed fucntions: exit, open, close, write, read, malloc, free
* Makefile must compile without relinks
* all, clean, fclean, re
* gcc -Wall -Wextra -Werror
* The binary must be named fillit and pushed in root directory

* usage display and proper exit
* from 1 to 26 Tetriminos

Program entry:

* 4 lines of 4 char + \n
* 4 blocks ('#') / empty ('.')
* 1 block must touch at least one other block
* 4/16 boxes for Tetriminos
* a Tretimino cannot be rotated

The smallest square:

* the final square can contain holes
* ('.') does not come in count when placing Tetriminos
* that's 12 char getting ignored
* Tetriminos are ordered by their apparition order in the entry file
