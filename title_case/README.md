Write a program that, given a single string S terminated by a newline character, will capitalize the first letter of each word except the words the, of, and, and but, unless any of those four words is also the first or last word of S.

For example, if a user inputs:

`the lord of the rings`, your program should print The Lord of the Rings  
`farenheit 451`, your program should print Farenheit 451  
`18% gone`, your program should print 18% Gone  
You may include additional header files as needed, and you may call any functions you'd like. Note that the CS50 Library's header file must be included with double quotes (i.e., #include "cs50.h") instead of angled brackets because of how it's installed on HackerRank's servers.

You may find the ctype.h and string.h libraries helpful!

###Input Format

A single line terminated by a newline character, consisting of serveral words of inconsistant capitalization.

###Constraints

S will consist solely of ASCII characters.

###Output Format

A single line of characters, consisting of words with their letters capitalized according to these rules:

First and last words are always capitalized  
the, and, of, and but are not capitalized, except when they are the first or last word.  
Numbers and special characters are left as they are.  

###Sample Input

`the good, the bad, and the ugly`

###Sample Output

`The Good, the Bad, and the Ugly`

###Explanation

We leave the TODO to you!
