//title of program
//Program for Inverse of Matrix
#include<stdio.h>
//function heading
void main()
{
//variable(array) declaration
int a[3][3];
int i,j;
//condition for inverse of matrix
for(i=0;i<3;i++){
for(j=0;j<3;j++){
//output statement 
printf("enter the element:a[%d][%d]",i,j);
//input statement 
scanf("%d",&a[i][j]);
}
}
//output statement 
printf("to print the array values\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
//output statement 
printf("%d\t",a[i][j]);
}
//output statement 
printf("\n");
}
//output statement 
printf("to print the array inverse matrix\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
//output statement 
printf("%d\t",a[j][i]);
}
//output statement 
printf("\n");
}
}