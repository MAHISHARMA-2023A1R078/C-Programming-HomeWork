//title of program
//Program of checking the eligibility for job using NestedIf
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a;
//output statement 
printf("enter your age");
//input statement 
scanf("%d",&a);
//condition of NestedIf
if(a>=18&&a<=50)
{
if(a>=18&&a<=25)
{
//output statement 
printf("you are eligible for grade1 job");
}
else
{
//output statement 
printf("you are eligible for grade2 job");
}
}
else
{
//output statement 
printf("you are not eligible for the job");
}
}

