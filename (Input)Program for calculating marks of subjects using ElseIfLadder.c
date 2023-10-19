//title of program
//Program for calculating marks using ElseIfLadder
#include<stdio.h>
//function heading
void main()
{
//(subjects)variable declaration
int hindi,english,maths,science,socialscience,total,avg,grade;
//output statement 
printf("enter the mark for hindi,english,maths,science and socialscience");
//Input statement 
scanf("%d%d%d%d%d",&hindi,&english,&maths,&science,&socialscience);
total=hindi+english+maths+science+socialscience;
avg=total/5;
//condition of ElseIfLadder
if((avg>=90)&&(avg<=100))
{
grade='A';
//output statement 
printf("you have scored A grade");
}
else if((avg>=80)&&(avg<=90))
{
grade='B';
//output statement 
printf("you have scored B grade");
}
else if((avg>=70)&&(avg<=80))
{
grade='C';
//output statement 
printf("you have scored C grade");
}
else if((avg>=60)&&(avg<=70))
{
grade='D';
//output statement 
printf("you have scored D grade");
}
else if((avg>=50)&&(avg<=60))
{
grade='E';
//output statement 
printf("you have scored E grade");
}
else
{
//output statement 
printf("Fail");
}
}