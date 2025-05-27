//A C program to understand nested if else
// Determine largest number out of 3 numbers
//Assumption : all three numbers are different
#include<stdio.h>
void main()
{
int no1,no2,no3;
printf("\n Please enter First Integer number=");
scanf("%d",&no1);
printf("\n Please enter Second Integer number=");
scanf("%d",&no2);
printf("\n Please enter Third Integer number=");
scanf("%d",&no3);
if(no1>no2)
{
if(no1>no3)
{
printf("\n First number (%d) is largest",no1);
}
else
{
printf("\n Second number (%d) is largest",no2);
}
}
else
{
if(no2>no3)
{
printf("\n Second Number (%d) is largest",no2);
}
else
{
printf("\n Third Number (%d) is largest",no3);
}
}
}
/*
output:
Please enter First Integer number=1
Please enter Second Integer number=3
Please enter Third Integer number=2
Second Number (3) is largest
*/
