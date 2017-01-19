Write a program that, given a string S representing an algebraic sum of integers, parses it and finds its value.

For example, if a user inputs:

-1 + 2, your program should print 1
4-3 + 9 -1, your program should print 9
123 + 234 - 0 + 8 - 2, your program should print 363
You may include additional header files as needed, and you may call any functions you'd like.

Input Format

You can assume the input follows the following guidelines (you don't have to check for them):

Your program will take strings containing the symbols {0,9}, +, - and the space character.
There can be any number of spaces between numbers and operators, but there will never be two consecutive numbers or two consecutive operators (with spaces in between).
There is a possibility for the first integer to have a leading negative sign, and the string won't end with an operator.
The algebraic sum will have at least one numeric term, although it might not contain an operator.
In other words, you can assume inputs like the following will never occur:

foobar
3 + x
3 * 4
+ - 4
+
9-
9 + 3 3
1 + - 1
However, expressions like

-4 + 3+33 - 2
42
-1+2+3+4+5+6+1234
Are all valid and should be evaluated.

Constraints

For each numerical term Ki that appears in S, -10000000 < Ki < 10000000

The evaluated sum will never cause integer overflow.

Output Format

A single number (might have more than one digit) followed by a new line.

Sample Input

1 + 1

Sample Output

2

Explanation

We leave the TODO to you!