//title of program
//Program of sum using Switch Case
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int sum=10,n=2;
//condition of switch case
switch(n)
{
case 1:
sum=sum+9;
case 2:
sum=sum+8;
case 5:
sum=sum+7;
case 9:
sum=sum+6;
default:
sum=sum-5;
}
//output statement 
printf("sum=%d",sum);
}