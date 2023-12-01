//title of program
//Program to print Duplicate elements in array
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int n;
//output statement 
printf("enter limit:");
//input  statement 
scanf("%d",&n);
//array,variable declaration
int a[n],b[n],i,j;
//output statement 
printf("enter elements:");
for(i=0;i<n;i++){
//input statement 
scanf("%d",&a[i]);
b[i]=0;
}
//output statement 
printf("duplicate elements are....\n");
for(i=0;i<n;){
int flag=0;
if(b[i]==0){
for(j=i+1;j<n;j++){
if(a[i]==a[j]){
flag=1;
b[j]=1;
}
}
if(flag==1)
//output statement 
printf("%d\n",a[i]);
i++;
}
else
i++;
}
}