//title of program
//Program based on function
#include<stdio.h>
//function heading
int fun(int arr[])
{
//variable declaration
int i;
//condition applied
for(i=0;i<5;i++){
arr[i]=arr[i]+10;
}
}
void main()
{
//variable declaration
int arr[5],i;
for(i=0;i<5;i++){
//output statement 
printf("enter the array elements arr[%d]",i);
//input statement 
scanf("%d",&arr[i]);
}
//output statement 
printf("printing entire array.....");
fun(arr);
for(i=0;i<5;i++){
//output statement 
printf("\n after function call a[%d]:%d",i,arr[i]);
}
}