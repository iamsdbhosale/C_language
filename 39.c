/*A C program to understand pointer*/
#include<stdio.h>
void main()
{
int x;
int *px;
x=10;
px=&x;
printf("\n Value of x=%d",x);
printf("\n Address of x i.e. px=%p",px);
printf("\n Address of x i.e. &x=%p",&x);
printf("\n Value at the address of x i.e. *px=%d",*px);
}
/*
Output:
Value of x=10
Address of x i.e. px=65524
Address of x i.e. &x=65524
Value at the address of x i.e. *px=10
*/
/*
Linux terminal
sdbhosale@humanrobot:~/C_language$ ./a.out

 Value of x=10
 Address of x i.e. px=0x7ffe9f63743c
 Address of x i.e. &x=0x7ffe9f63743c
 Value at the address of x i.e. *px=10
*/
