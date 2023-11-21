//title of program
//Program to find the length of string
#include<stdio.h>
//function heading
#include<string.h>
//function heading for string
void main()
{
//variable declaration
char str1[20];
int strlength;
//output statement 
printf("enter the string:\n");
//input statement 
scanf("%s",str1);
strlength=strlen(str1);
//output statement 
printf("given string is:%d",strlength);
}