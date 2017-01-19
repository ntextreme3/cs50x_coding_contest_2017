Write a program, that given the number of fish F the cat starts with, the number of days D the cat plans to eat fish, and how many fish the cat will eat per day Ei, returns the day that our poor kitty will run out of fish. We will be 0 indexing our days.

For example, if the cat starts out with 70 fish, and on the first day, plans to eat 71, it will run out that day, and you should print 0 to let them know. If the cat will never run out of fish, print Happy Cat!.

You may include additional header files as needed, and you may call any functions you'd like. Note that the CS50 Library's header file must be included with double quotes (i.e., #include "cs50.h") instead of angled brackets because of how it's installed on HackerRank's servers.

Odds are you'll find get_int and printf of interest!

Input Format

The first line will be an integer number of fish F the cat starts out with. The next line will be an integer number of days D the cat will eat fish. There will be D lines afterwards, each containing an integer number of fish the cat wants to eat that day.

Constraints

0 <= F < INT_MAX

0 <= D < INT_MAX

For each Ei, 0 <= Ei <= INT_MAX

Output Format

If the cat will run out of fish, output a day in int format. Otherwise, output Happy Cat!. No need to worry about newlines.

Sample Input

40
5
10
7
30
5
5
Sample Output

2

Explanation

The cat starts out with 40 fish. It plans to eat fish for 5 days. On the 0th day, it eats 10 of those fish, so has 40 - 10 = 30 fish left. On the 1st day, it eats 7 of the remaining 30 fish, and so has 30 - 7 = 23 fish left. On the 2nd day, the cat plans to eat 30 of the remaining 23 fish. Uh oh! The cat will run out of fish on the 2nd day.