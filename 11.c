//A C program to understand else if ladder
#include<stdio.h>
void main()
{
int no;
printf("\n Please enter value of any integer number=");
scanf("%d",&no);
if(no>0)
{
printf("\n Entered number (%d) is Positive Number",no);
}
else if(no<0)
{
printf("\n Entered number (%d) is Negative Number",no);
}
else
{
printf("\n Entered number (%d) is Zero Number",no);
}
}

/*
output:
Please enter value of any integer number=0
Entered number (0) is Zero Number
*/
