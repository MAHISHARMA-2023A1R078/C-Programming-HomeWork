//title of program
//Program to check Armstrong numbers between 100 to 1000.
#include<stdio.h>
//function heading
#include<math.h>
//header file to perform mathematical operations
void main()
{
//variable declaration
int start,end,number,originalnumber,remainder,result,n;
//output statement 
printf("enter the starting number");
//input statement 
scanf("%d",&start);
//output statement 
printf("enter the ending number");
//input statement 
scanf("%d",&end);
//output statement
printf("armstrong number between %d and %d are:\n",start,end);
for(number=start;number<=end;++number)
{
originalnumber=number;
n=0;
result=0;
while(originalnumber!=0)
{
originalnumber/=10;
++n;
}
originalnumber=number;
//calculate the armstrong number
while(originalnumber!=0)
{
remainder=originalnumber%10;
result+=pow(remainder,n);
originalnumber/=10;
}
//check if the number is Armstrong or not
if(result==number)
{
printf("%d\n",number);
}
}
printf("\n");
}
