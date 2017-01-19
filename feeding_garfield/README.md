Jon recently noticed that Garfield is always hungry. He decides to go on a grocery run and comes back with a variety of food items. Each food item satisfies Garfield's hunger by si and gives Garfield hi happiness.

We shall represent each food item as a tuple (si, hi). Garfield's goal is to maximize his overall happiness H by eating the food items given that he starts at a given hunger level L. Note that by eating a particular food item, he increases his happiness by hi and decreases his current hunger level by si.

Garfield will also incur a -20 happiness for every unit he gets overfed (i.e. sum of the si - L) and will incur a -10 happiness for each unit of hunger that isn't satisfied (i.e. L - sum of the si).

Write a program that, given Garfield's current hunger level L and a list of food items si, hi, outputs the maximum happiness H that Garfield can achieve.

###Input Format

The first line will be an integer representing Garfield's initial hunger level L.

The next line will be an integer represeting the number of food items N that Jon bought.

The next N lines will be the description si, hi of each food item. You may assume that each of the si and hi are integers.

###Constraints

1 <= N < 30

###Output Format

An integer representing Garfields maximum happiness H.

###Sample Input
<pre>
10  
3  
6, 2  
4, 3  
9, 5  
</pre>

###Sample Output
<pre>
5
</pre>

###Explanation

In this case, the maximum happiness occurs when Garfield eats the 0th and 1st items, thus dropping his hunger level to 0 and giving him 5 happiness.
