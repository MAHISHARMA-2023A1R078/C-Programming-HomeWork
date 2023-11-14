//title of program
//Program to print elements from one array to another 5,5 times
#include<stdio.h>
//function heading
void main()
{
//variable(array) declaration
int arr[10];
int i,n;
//output statement 
printf("enter the size of an array");
//input statement 
scanf("%d",&n);
//condition to print elements
for(i=0;i<n;i++){
//output statement 
printf("\n enter the %d values of array",i);
//input statement 
scanf("%d",&arr[i]);
}
//condition to print elements 5,5 times 
for(i=0;i<n;i++){
//output statement 
printf("\n%d%d%d%d%d",arr[i],*(i+arr),*(arr+i),*(i+arr),i[arr]);
}
}