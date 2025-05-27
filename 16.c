/* A C program to demonstrate while and do while program*/
//though logical condition of do while loop is not true then also do while gets executed at lease for one time
#include<stdio.h>
void main()
{
int no;
no=1;
do
{
printf("\n Execution of Looping control statement");
no++;
}while(no==50);
}
/*
output:
Execution of Looping control statement
*/
