//titile of program
//Program to print the numbers in triangle form using decrement condition
#include<stdio.h>
//header file
void main()
{
//variable declaration
int i,j;
//condition to print the numbers in triangle form using decrement condition
for(i=0;i<=5;i++)
{
for(j=5;j>=i;j--)
{
//output statement 
printf("%d",i);
}
//output statement 
printf("\n");
}
}
