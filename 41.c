//Call by ref –prog for swapping the nos
#include<stdio.h>
void swap(int *a, int *b); //prototype
void main()
{
int x,y;
x=100;
y=200;
printf("\n in main() -> Before caslling swap :x=%d y=%d",x,y);
swap(&x, &y); //function call
printf("\n in main() -> After calling swap :x=%d y=%d",x,y);
}
void swap(int *a, int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("\n In the swap function :x=%d y=%d",*a,*b);
}
/*
Output:
Before caslling swap :x=100 y=200
In the swap function :x=200 y=100
After calling swap :x=200 y=100
*/
