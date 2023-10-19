//title of program
//Program to print star followed by a space using ForLoop
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int i,j,rows;
//output statement 
printf("enter number of rows");
//input statement 
scanf("%d",&rows);
//condition of For Loop
for(i=1;i<=rows;++i)
{
for(j=1;j<=i;++j)
{
//Output statement to print a star followed by a space
printf("*");
}
//Output statement 
printf("\n");
}
}