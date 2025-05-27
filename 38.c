//print the address of given variable and understand pointer concept
/*
to display address of variable in c - %u -> turbo c
to display address of variable in c - %p  -> linux terminal
*/
#include<stdio.h>
void main()
{
int i=3,*pi;
printf("\n Address of i=%p",&i);
printf("\n Value of i=%d",i);
pi=&i;
printf("\n Value of i=%d",*pi);
printf("\n Address of i=%p",pi);
}
/*
Output:
Address of i=65524
Value of i=3
Value of i=3
Address of i=65524
*/
/*
Linux terminal
sdbhosale@humanrobot:~/C_language$ ./a.out

 Address of i=0x7ffcfb4f5a0c
 Value of i=3
 Value of i=3
 Address of i=0x7ffcfb4f5a0c
*/
