//title of program
//Program to print Diamond Pattern of numbers.
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int n,a;
//output statement
printf("enter number of rows");
//input statement 
scanf("%d",&n);
//from top to bottom (for first half portion)
for(int i=1;i<=n;i++)
{
a=1;
//print space
for(int j=i;j<=n;j++)
{
printf(" ");
}
//print digit
for(int k=1;k<=2*i-1;k++)
{
printf("%d",a++);
}
printf("\n");
}
//for second portion
for(int i=n-1;i>=1;i--)
{
a=1;
for(int j=n;j>=i;j--)
{
printf(" ");
}
for(int k=1;k<=2*i-1;k++)
{
printf("%d",a++);
}
//output statement
printf("\n");
}
}