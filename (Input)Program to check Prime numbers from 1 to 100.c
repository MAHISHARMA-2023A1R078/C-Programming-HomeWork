//title of program
//Program to check prime numbers from 1 to 100
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int i,j,count=0;
//input statement 
scanf("%d%d",&i,&j);
//condition of For
for(i=1;i<=100;i++)
{
count=0;
for(j=2;j<i/2;j++)
{
if(i%j==0)
{
count=1;
break;
}
}
if(count!=1)
{
//output statement 
printf("%d is a prime number\n",i);
//output statement 
printf("%d is a prime number\n",j);
}
}
}