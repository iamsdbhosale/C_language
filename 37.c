// Call by value –program for swapping the two numbers
#include<stdio.h>
void swapv(int a, int b); //prototype
void main()
{
int x,y;
x=100;
y=200;
printf("\n Before calling swap (In main function):x=%d y=%d",x,y);
swapv(x, y); //function call
printf("\n After calling swap (In main function):x=%d y=%d",x,y);
}
void swapv(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("\n In swap function :x=%d y=%d",a,b);
}
/*
Output:
Before calling swap (In main function):x=100 y=200
In swap function :x=200 y=100
After calling swap (In main function):x=100 y=200
*/
