//title of program
//Program to copy elements from one array to another
#include<stdio.h>
//function heading
void main()
{
//variable(array) declaration
int a[5]={3,6,9,2,5},n=5;
int b[n],i;
//condition for copy elements from one array to another
for(i=0;i<n;i++)
{
b[i]=a[i];
}
//output statement 
printf("the first array is:\n");
for(i=0;i<n;i++){
//output statement 
printf("%d",a[i]);
}
//output statement 
printf("the second array is:\n");
for(i=0;i<n;i++){
//output statement 
printf("%d",b[i]);
}
}