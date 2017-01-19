Write a program that, given a string S, outputs a pretty-printed version of S inside of a boxed frame made up of # characters, with each word on its own line. The frame should be padded to the left and right, per the sample below.

###Input Format

A single string, S.

###Constraints

none

###Output Format

A pretty-print of S inside of a frame made of # characters, with one word per line.

###Sample Input

Hello world in a frame.

###Sample Output  

<pre>
##########  
# Hello &nbsp;#  
# world &nbsp;#  
# in &nbsp;&nbsp;&nbsp;&nbsp;#  
# a &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;#  
# frame. #  
##########  
</pre>

###Explanation  

Get a sentence from the user.  
Separate out the sentence by word.  
Find the maximum length word.  
Determine a way to pad the other words with spaces so the frame isn't lopsided.  
Print out all the words inside the frame!  
