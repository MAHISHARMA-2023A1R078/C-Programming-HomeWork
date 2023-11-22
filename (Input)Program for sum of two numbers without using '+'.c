//title of program
//Program for sum of two numbers without using '+'
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a,b,i;
//output statement 
printf("enter the a and b values");
//input statement 
scanf("%d%d",&a,&b);
//condition for sum
for(i=0;i<b;i++){
a++;
}
//output statement 
printf("sum is=%d",a);
}