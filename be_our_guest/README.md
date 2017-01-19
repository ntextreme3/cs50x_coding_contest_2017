Write a program for a hotel manager that, given via standard input a two-dimensional map of hotel rooms and whether they are vacant or occupied, takes in a value representing the number of rooms that a new group is trying to book.

If there is space in the hotel for all of the rooms to be consecutive, your program should output 1. If there is not space for all of the rooms to be next to one another, your program should output 0.

You may include additional header files as needed, and you may call any functions you'd like. Note that the CS50 Library's header file must be included with double quotes (i.e., #include "cs50.h") instead of angled brackets because of how it's installed on HackerRank's servers.

###Input Format

The first line of input will be two numbers, N and M, separated by a space, where N represents the number of floors in the hotel, and M represents the number of rooms on each floor. The following N lines of input will be a string representing the rooms on a floor, in sequential order. Each character in the string represents one room, where a 1 represents an occupied room and a 0 represents a vacant room.

For instance, the line 0011101 would represent a floor with seven rooms, of which the first two are vacant, the following three are occupied, the following one is vacant, and the last one is occupied.

After taking in input for the N floors, the final line of input will be an integer S, representing the number of rooms for the group that is trying to check in.

###Constraints

N >= 1

M >= 1

S >= 1

The length of each of the N lines will be M

Each character of each of the N lines will be 0 or 1

###Output Format

A single digit 0 if the group checking in cannot have all of their rooms next to one another on the same floor, and a 1 if it is possible.

###Sample Input

<pre>
5 6
110010
001111
111111
000111
110010
4
</pre>

###Sample Output

<pre>
0
</pre>

###Explanation

We leave the TODO to you!
