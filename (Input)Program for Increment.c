//title of program
//Program for Increment
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a=3;
//variable declaration for incrementing the value
int b=a++ + ++a + a++ + ++a;
//output statement 
printf("%d",b);
}