/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Example

There are  elements, two positive, two negative and one zero. Their ratios are ,  and . Results are printed as:

0.400000
0.400000
0.200000
Function Description

Complete the plusMinus function in the editor below.

plusMinus has the following parameter(s):

int arr[n]: an array of integers
Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with  digits after the decimal. The function should not return a value.

Input Format

The first line contains an integer, , the size of the array.
The second line contains  space-separated integers that describe .

Constraints



Output Format

Print the following  lines, each to  decimals:

proportion of positive values
proportion of negative values
proportion of zeros
Sample Input

STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
Sample Output

0.500000
0.333333
0.166667
Explanation

There are  positive numbers,  negative numbers, and  zero in the array.
The proportions of occurrence are positive: , negative:  and zeros: .

Language
C
More
2345678910111213141516171819202122232425262728
#include<stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    int i;
    for(i=0;i<n;i++)
…        zer++;
        else
        neg++;
    }
    printf("%.6f\n",(float)pos/n);
    printf("%.6f\n",(float)neg/n);
    printf("%.6f\n",(float)zer/n);
}
Line: 28 Col: 2

Test against custom input
Problem Solving
You have earned 10.00 points!
You are now 69 points away from the 2nd star for your problem solving badge.
1%31/100
Congratulations
You solved this challenge. Would you like to challenge your friends?Share on FacebookShare on TwitterShare on LinkedIn

Test case 0

Test case 1

Test case 2

Test case 3

Test case 4

Test case 5

Test case 6

Test case 7

Test case 8

Test case 9

Test case 10

Test case 11
Compiler Message
Success
Hidden Test Case
Unlock this testcase for 5 hackos.

*/
#include<stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int pos=0,neg=0,zer=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        pos++;
        else if(a[i]==0)
        zer++;
        else
        neg++;
    }
    printf("%.6f\n",(float)pos/n);
    printf("%.6f\n",(float)neg/n);
    printf("%.6f\n",(float)zer/n);
}
