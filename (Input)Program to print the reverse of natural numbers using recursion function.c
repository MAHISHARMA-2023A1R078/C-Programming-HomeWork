//title of program
//Program to print the reverse of natural numbers using recursion function
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
void display(int x){
if(x<0)
return;
else
//output statement 
printf("%d\n",x);
display(x-1);
}