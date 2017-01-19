Write a program that, given a string S of space-separated words via standard input, finds the position of the word "cat".

If a cat is found, the program should print The cat is the n item in the box, where n represents an ordinal number. If you find another cat, do nothing. If no cat is found, the program should print No cat yet. If an empty string is passed to your program, it should print There is no box and exit.

When creating the ordinal, recall that:

If the last digit is 1, the suffix should be "st"  
If the last digit is 2, the suffix should be "nd"  
If the last digit is 3, the suffix should be "rd"  
If the last two digits are 1*x*, or no other cases apply, the suffix should be "th"  
Make sure to treat the first item as the "1st" position, not the "0th".  

For example, if a user inputs:

`socks cat shirt`, your program should print `The cat is the 2nd item in the box`  
`book calculator cat`, your program should print `The cat is the 3rd item in the box`  
`correct horse battery staple`, your program should print `No cat yet`  
an empty string, your program should print `There is no box`  
You may include additional header files as needed, and you may call any functions you'd like.  

Odds are you'll find get_string, printf, strtok, and strcmp of interest!

###Input Format

A space-separated string of words, which may or may not contain "cat".

###Constraints

S will contain between 0 and 200 words, inclusive.

###Output Format

The output format should be any of the stated sentences, with n properly filled in with the proper ordinal.

###Sample Input

`blanket catnip cat`

###Sample Output

`The cat is the 3rd item in the box`

###Explanation

We leave the TODO to you!
