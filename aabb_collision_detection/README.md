Physics simulation is an important task that we depend on computers to perform, not only for science, but also for games. Think of the last 2D game you played. Did two game objects ever collide and make something happen in the game? Perhaps your character jumped and landed on a platform or an enemy, or perhaps your character collected some item. Maybe a projectile hit an enemy and delt them damage.

In all of these situations, the game needs to be able to detect when two objects collide, or are overlapping. One way to do this is to model each game object as an axis-aligned bounding box, or AABB, and see if the boxes overlap. An AABB is simply a rectangle with sides that are always parallel to the x- and y-axes; it never rotates. There are a number of ways to represent AABBs in code, such as the (x, y) coordinates of two opposite corners, or the coordinates of one corner along with the width and height of the box. For this challenge we will use the top left corner of the box along with its width height. The positive x direction is to the right and the positive y direction is down.

Write a program that reads values describing two AABBs from standard input and prints the area of their overlapping region or 0.00 if they do not overlap.

For example, if AABB A has its top left corner at (10, 10), a width of 4, and a height of 7, and AABB B has its top left corner at (6, 9), a width of 6, and a height of 3, then the overlapping region extends from x = 10 to x = 12 and from y = 10 to y = 12, so the area of the overlapping region is 4. Your program should print 4.00 in this case.

###Input Format

Two lines, each of the format x y w h. Each line describes a single AABB, where x and y are the x and y coordinates of its top left corner, w is its width, and h is its height.

###Constraints

-1000000.0 <= x <= 1000000.0

-1000000.0 <= y <= 1000000.0

0.0 <= w <= 10000.0

0.0 <= h <= 10000.0

Each of x, y, w, and h will always be a floating-point value with exactly one digit after the decimal point.

###Output Format

A single line containing the area of the overlapping region, represented as a floating-point value with exactly two digits after the decimal point.

###Sample Input
<pre>
10.0 10.0 4.0 7.0  
6.0 9.0 6.0 3.0  
</pre>
###Sample Output

`4.00`

###Explanation

Insert code at the TODO!
