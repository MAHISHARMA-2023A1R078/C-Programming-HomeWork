//title of program
//Program for sum of even and odd numbers using array
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int n;
//output statement 
printf("enter the size of an array");
//input statement 
scanf("%d",&n);
int a[n],sum=0,sum1=0;
for(int i=0;i<n;i++){
//input statement 
scanf("%d",&a[i]);
if(i%2==0)
sum=sum+a[i];
else
sum1=sum1+a[i];
}
//output statement 
printf("sum of even elements=%d\n",sum);
//output statement 
printf("sum of odd elements=%d\n",sum1);
}