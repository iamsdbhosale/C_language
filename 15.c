/* A C program to display all numbers which are even and divisible by 7 from 1 to
20*/
//using do while loop
#include<stdio.h>
void main()
{
int no;
no=1;
do
{
if(no%2==0&&no%7==0)
{
printf("\t %d",no);
}
no++;
}while(no<=50);
}
/*
output:
14 28 42 */
