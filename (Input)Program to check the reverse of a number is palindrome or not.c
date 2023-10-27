//title of program
//Program to check the reverse of a number is palindrome or not
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int n,rev=0,rem,palin;
//output statement 
printf("enter an integer number");
//input statement 
scanf("%d",&n);
palin=n;
//condition to check the reverse of a number is palindrome or not using a while loop
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;   
}
if(palin==rev)
{
//output statement 
printf("%d is a palindrome",palin);
}
else
{
//output statement 
printf("%d is not a palindrome",palin);
}
//output statement 
printf("reverse number=%d",rev);
}
