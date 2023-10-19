//title of program
//Program for greatest of four numbers
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a,b,c,d,big;
//output statement
printf("enter four numbers");
//input statement 
scanf("%d%d%d%d",&a,&b,&c,&d);
big=a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
//output statement 
printf("the greatest number is=%d",big);
}