# 42fillit

This project is about algorithm and back tracking in c.

Project description:
This project is about read and input from a file which contain the tetris pieces with the following format.
...#
...#
...#
...#

....
....
....
####

.###
...#
....
....

....
..##
.##.
....

....
.##.
.##.
....

....
....
##..
.##.

##..
.#..
.#..
....

....
###.
.#..
....

The goal of this project is to arrange every Tetriminos with each others in order to make
the smallest possible square. But in some cases, this square should contains holes when
some given pieces won’t fit in perfectly with others.

Expected output:
ABBBB.
ACCCEE
AFFCEE
A.FFGG
HHHDDG
.HDD.G

Usage:
./fillit [File-location]
