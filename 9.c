//A C program to understand if else statement
#include<stdio.h>
void main()
{
int no,r;
printf("\n Please enter value of any integer number=");
scanf("%d",&no);
r=no%2;
if(r==0)
{
printf("\n Entered number (%d) is Even Number",no);
}
else
{
printf("\n Entered number (%d) is Odd Number",no);
}
}
