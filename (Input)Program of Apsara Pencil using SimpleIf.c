//title of program
//Program of Apsara Pencil using SimpleIf
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int mark;
//output statement 
printf("enter the mark");
//input statement 
scanf("%d",&mark);
//character declaration
char ch;
//output statement 
printf("enter handwriting is good or bad");
//input statement 
scanf("%c%c",&ch,&ch);
//condition of simpleif
if(ch=='y'||ch=='Y')
{
mark=mark+10;
}
//output statement 
printf("your mark is %d",mark);
}