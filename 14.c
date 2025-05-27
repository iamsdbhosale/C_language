/* A C program to display all even numbers from 1 to 20*/
#include<stdio.h>
void main()
{
int no;
no=1;
while(no<=20)
{
if(no%2==0)
{
printf("\t %d",no);
}
no++;
}
}
/*
output:
2 4 6 8 10 12 14 16 18 20*/
