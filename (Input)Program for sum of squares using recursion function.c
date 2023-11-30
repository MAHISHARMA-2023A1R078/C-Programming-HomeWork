//title of program
//Program for sum of squares using recursion function
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int num,fact1;
//output statement 
printf("enter the number");
//input statement 
scanf("%d",&num);
fact1=fact(num);
//output statement 
printf("factorial=%d",fact1);
}
int fact(int n){
if(n==1)
return 1;
else
return (n*n)+fact(n-1);
}