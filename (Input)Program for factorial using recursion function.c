//title of program
//Program for factorial using recursion function
#include<stdio.h>
//function heading
void main(){
//variable declaration
int num,fact1=0;
int fact(int);
//output statement 
printf("enter the number");
//input statement 
scanf("%d",&num);
fact1=fact(num);
//output statement 
printf("factorial of the number:%d",fact1);
}
int fact(int f){
if(f==1)
return 1;
else
return f*fact(f-1);
}