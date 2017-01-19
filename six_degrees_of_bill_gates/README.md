Write a program that, given a number of people N as an integer, an _N_x_N_ matrix of integers A, where A[0,3] = 1 means that people 0 and 3 have a connection and A[5,2] = 0 means that people 2 and 5 do not have a connection, and two integers, X and Y representing the two people to check, print via standard output the number that is the smallest number of connections to have the two people connected. If no connection is possible, print -1.

For example, if a user inputs:

3 [[0, 1, 0], [1, 0, 1], [0, 1, 0]] 0 1, your program should print 1
3 [[0, 1, 0], [1, 0, 1], [0, 1, 0]] 2 0, your program should print 2
3 [[0, 1, 0], [1, 0, 0], [0, 0, 0]] 0 2, your program should print -1
You may include additional header files as needed, and you may call any functions you'd like. Note that the CS50 Library's header file must be included with double quotes (i.e., #include "cs50.h") instead of angled brackets because of how it's installed on HackerRank's servers.

Input Format

The number N will be an integer followed by a newline. The next N lines will be the rows of the two-dimensional array. Each row will be comprised of N integers, with one space in between each integer (N - 1 spaces total) and a newline at the end of the row. The next two lines will each have one integer followed by a newline, representing the people being compared.

Constraints

2 <= N <= 100

Each A[i, j] will be 0 or 1.

A will be a symmetric matrix.

0 <= X < N

0 <= Y < N

Output Format

A number value as an integer, no trailing newline.

Sample Input

3
0 1 0
1 0 1
0 1 0
2
0
Sample Output

2

Explanation

We leave the TODO to you!