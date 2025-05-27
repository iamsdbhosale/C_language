//A C program to understand if statement
/*
To determine number is entered number is even!
*/
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
}
