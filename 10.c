//Increment and Decrement Operator in C
// by using user defined functions
#include<stdio.h>
void pre_increment()
{
int x,i;
i=10;
x=++i;
printf("x: %d",x);
printf("i: %d",i);
}
/*
Output
x: 11
i: 11
*/
void post_increment()
{
int x,i;
i=10;
x=i++;
printf("x: %d",x);
printf("i: %d",i);
}
/*
Output
x: 10
i: 11
*/
void pre_decrement()
{
int x,i;
i=10;
x=--i;
printf("x: %d",x);
printf("i: %d",i);
}
/*Output
x: 9
i: 9
*/
void post_decrement()
{
int x,i;
i=10;
x=i--;
printf("x: %d",x);
printf("i: %d",i);
}
/*Output
x: 10
i: 9
*/
void main()
{
printf("\n");
pre_increment();
printf("\n");
post_increment();
printf("\n");
pre_decrement();
printf("\n");
post_decrement();
printf("\n");
}
