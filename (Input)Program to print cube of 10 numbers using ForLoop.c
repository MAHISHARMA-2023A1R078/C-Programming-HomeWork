//title of program
//Program to print cube of 10 numbers using ForLoop
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int i,cube,number;
//output statement 
printf("enter the number");
//input statement 
scanf("%d",&number);
//condition of For Loop
for(i=1;i<=10;i++)
{
cube=i*i*i;
//output statement 
printf("%d=%d\n",i,cube);
}
}