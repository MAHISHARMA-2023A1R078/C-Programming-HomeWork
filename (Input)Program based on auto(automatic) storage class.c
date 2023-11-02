//title of program
//Program based on auto(automatic) storage class
#include<stdio.h>
//function heading
void main()
{
//variable (auto) declaration
auto int i=19;
{
auto int i=20;
//outside statement 
printf("inside block:%d",i);
}
//inside statement 
printf("outside block:%d",i);
}