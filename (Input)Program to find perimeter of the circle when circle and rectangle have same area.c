//Title of program
//Program to find perimeter of the circle when circle and rectangle have same area
#include<stdio.h>
//function heading
#include<math.h>
//header file to perform mathematical operations
void main()
{
//variable declaration
int l=44,b=56,area;
//variable declaration
float r;
//formula used for calculating the area
area=l*b;
//output statement 
printf("the area of rect=%d\n",area);
//formula to find the radius of circle
r=sqrt(area/3.14);
//input statement to find
float peri;
//formula to find the perimeter of circle
peri=3.14*2*r;
//output statement 
printf("perimeter of the circle=%f",peri);
}