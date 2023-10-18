//title of program
//Program to find the total Surface area and volume of Cone
#include<stdio.h>
//function heading
#include<math.h>
//header file to perform mathematical operations
void main()
{
//variable declaration
float r,h;
//output statement 
printf("enter the radius and height of cone");
//input statement 
scanf("%f%f",&r,&h);
//input statement to find
float surfacearea,volume;
//formula used
surfacearea=3.14*r*(r+sqrt(h*h+r*r));
volume=0.33*(3.14*r*r*h);
//output statement
printf("surface area of cone=%f\n",surfacearea);
//output statement 
printf("volume of cone=%f\n",volume);
}
