/* A C program to use of break statement*/
#include<stdio.h>
void main()
{
int i,j;
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
printf("*");
if(i==j)
{
break;
}
}
printf("\n");
}
}
/*
output:
*
**
***
****
*/
