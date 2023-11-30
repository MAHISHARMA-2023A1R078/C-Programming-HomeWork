//title of program
//Program based on function with argument with return
#include<stdio.h>
//function heading
void main()
{
//function declaration
int add(int,int);
//variable declaration
int a,b,c;
//output statement 
printf("enter two numbers");
//input statement 
scanf("%d%d",&a,&b);
c=add(a,b);
//output statement 
printf("sum=%d",c);
}
int add(int x,int y){
int z=x+y;
return z;
}