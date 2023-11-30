//title of program
//Program based on function without argument with return
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int add();
int c;
c=add();
//output statement 
printf("sum=%d",c);
}
int add()
{
int x,y;
//output statement 
printf("enter two numbers");
//input statement 
scanf("%d%d",&x,&y);
int z=x+y;
return z;
}