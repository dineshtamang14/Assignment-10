                              Assignments AUG 19, 2021
Q.1 Check if the sum of a subarray within a given range is a perfect square or not
Given an array arr[] of size N and an array range[], the task is to check if the sum of the subarray {range[0],
.. , range[1]} is a perfect square or not. If the sum is a perfect square, then print the square root of the sum.
Otherwise, print -1.


Input: arr[] = {2, 19, 33, 48, 90, 100}, range = [1, 3]
Output: 10

Explanation: The sum of element from position 1 to position 3 is 19 + 33 + 48 = 100, which is a perfect
square of 10.
Input: arr[] = {13, 15, 30, 55, 87}, range = [0, 1]
Output: -1


Q.2 Given an array A[] consisting of N integers from a range [1, N], the task is to calculate the count of
array elements (non-distinct) that can be represented as the sum of two or more consecutive array
elements.

Input: a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5}
Output: 5


Explanation:
The array elements satisfying the condition are:
4 = 3 + 1
5 = 1 + 4 or 4 + 1
9 = 3 + 1 + 4 + 1
6 = 1 + 5 or 1 + 4 + 1
5 = 1 + 4 or 4 + 1
Input: a[] = {1, 1, 1, 1, 1}
Output: 0
