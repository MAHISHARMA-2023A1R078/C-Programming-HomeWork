//title of program
//Program to print the natural numbers with the use of recursion function
#include<stdio.h>
//function heading
void display(int);
void main(){
//variable declaration
int limit;
//output statement 
printf("\n enter the limit to print the natural number:");
//input statement 
scanf("%d",&limit);
display(limit);
}
void display(int x)
{
if(x)
display(x-1);
else
return;
//output statement 
printf("\n%d\n",x);
}