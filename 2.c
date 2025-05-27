/*
A C program to calculate area of circle
*/
#include<stdio.h>
#define pi 3.14
void main()
{
int r;
float ac;
printf("\n Please enter radius=");
scanf("%d",&r);
//pi=3.14; //defining value of pi locally to machine
ac=pi*r*r;
printf("\n Area of circle=%f \n",ac);
}
/*
sdbhosale@humanrobot:~/C_language$ nano 2.c
sdbhosale@humanrobot:~/C_language$ ./a.out

 Please enter radius=2

 Area of circle=12.560000
*/
