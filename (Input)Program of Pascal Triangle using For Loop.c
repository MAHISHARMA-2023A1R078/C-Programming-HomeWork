//title of program
//Program of Pascal Triangle using ForLoop
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int rows,coef=1,space,i,j;
//output statement 
printf("enter the number of rows");
//input statement 
scanf("%d",&rows);
//loop through each row
for(i=0;i<rows;i++)
{
//print spaces before the numbers
for(space=1;space<=rows-i;space++)
printf(" ");
//print numbers in each row
for(j=0;j<=i;j++)
{
//calculate and print the coefficient
if(j==0||i==0)
coef=1;
else
coef=coef*(i-j+1/j);
//output statement 
printf("%4d",coef);
}
//output statement 
printf("\n");
}
}