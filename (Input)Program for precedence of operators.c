//title of program
//Program for precedence of operators
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a=5,b=10,c=15;
//input statement to find
int result1,result2,result3,result4;
result1=a+b*c;
result2=(a+b)*c;
result3=a-b/c;
result4=(a-b)/c;
//output statements
printf("result of a+b*c:%d\n",result1);
printf("result of (a+b)*c:%d\n",result2);
printf("result of a-b/c:%d\n",result3);
printf("result of (a-b)/c:%d\n",result4);
}