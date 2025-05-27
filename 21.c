/* A C program to use of goto statement*/
#include<stdio.h>
//#include<process.h> // for turbo c++
/* A C program to use of goto statement*/
#include<stdlib.h> //for linux terminal
void main()
{
int no,i;
no=10;
if(no==1)
{
g:
printf("\n Execution of goto statement");
exit(3);
}
if(no==10)
goto g;
printf("\n next statement");
printf("\n After goto statement");
}
/*
output:
Execution of goto statement
*/
