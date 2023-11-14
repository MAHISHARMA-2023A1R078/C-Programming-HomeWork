//title of program
//Program for deleting an element from the specified location from an array
#include<stdio.h>
//function heading
void main()
{
//variable(array) declaration
int arr[30],i,num,loc;
//output statement 
printf("enter the size of an array");
//input statement 
scanf("%d",&num);
//output statement 
printf("enter the elements %d:",num);
//condition for deleting an element 
for(i=0;i<num;i++){
//input statement 
scanf("%d",&arr[i]);
}
//output statement 
printf("enter the location to delete the value");
//input statement 
scanf("%d",&loc);
while(loc<num){
arr[loc-1]=arr[loc];
loc++;
}
num--;
for(i=0;i<num;i++){
//output statement 
printf("\n%d",arr[i]);
}
}