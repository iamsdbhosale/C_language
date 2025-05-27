/*A C program to understand pointer arithmetic and pointer and array*/
#include <stdio.h>
void main ()
{
int var[3] = {10, 100, 200};
int i, *ptr;
/* let us have array address in pointer */
ptr = var;
for ( i = 0; i < 3; i++)
{
printf("Address of var[%d] = %p\n", i, ptr );
printf("Value of var[%d] = %d\n", i, *ptr );
/* move to the next location */
ptr++;
}
}
/*
Output:
Address of var[0] = 65520
Value of var[0] = 10
Address of var[1] = 65522
Value of var[1] = 100
Address of var[2] = 65524
Value of var[2] = 200
*/
/*
Linux terminal
sdbhosale@humanrobot:~/C_language$ ./a.out
Address of var[0] = 0x7ffc3e1577fc
Value of var[0] = 10
Address of var[1] = 0x7ffc3e157800
Value of var[1] = 100
Address of var[2] = 0x7ffc3e157804
Value of var[2] = 200
*/
