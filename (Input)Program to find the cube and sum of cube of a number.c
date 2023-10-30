//title of program
//Program to find the cube and sum of cube of a number.
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int number,sum=0,digit,cube;
//output statement 
printf("enter a number");
//input statement 
scanf("%d",&number);
//condition to find the cube and sum of cube of a number
while(number!=0)
{
//get the last digit
digit=number%10;
cube=digit*digit*digit;
//add the digit to the sum
sum+=cube;
//remove the last digit from the number
number/=10;
}
//output the sum of digits 
printf("%d",sum);
}
