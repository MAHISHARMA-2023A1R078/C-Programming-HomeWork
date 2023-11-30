//title of program
//Program for addition of array
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
int a[n],sum=0;
//output statement 
printf("enter array elements");
for(int i=0;i<n;i++){
//input statement 
scanf("%d",&a[i]);
sum=sum+a[i];
}
//output statement 
printf("sum of array elements=%d",sum);
}