//title of program
//Program to find the second largest element in array
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int n;
//output statement 
printf("enter the limit");
//input statement 
scanf("%d",&n);
int a[n],i;
//output statement 
printf("enter array elements");
for(i=0;i<n;i++)
//input statement 
scanf("%d",&a[i]);
int big,sbig;
big=a[0],sbig=a[1];
if(big<sbig){
big=a[1];
sbig=a[0];
}
for(i=1;i<n;i++){
if(big<a[i]){
sbig=big;
big=a[i];
}
else if(sbig<a[i])
sbig=a[i];
}
//output statement 
printf("second largest element is %d",sbig);
}