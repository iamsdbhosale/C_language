/* program for addition of two time*/
/*A C program to understand addition two times by using structure*/
#include<stdio.h>
void main()
{
struct time
{
int h,m;
}t1,t2,t3;
printf("\n Please enter first time's of Hour:");
scanf("%d",&t1.h);
printf("\n Please enter first time's of Minutes:");
scanf("%d",&t1.m);
printf("\n Please enter Second time's of Hour:");
scanf("%d",&t2.h);
printf("\n Please enter Second time's of Minutes:");
scanf("%d",&t2.m);
printf("\n First Time in HH:MM format:%d:%d",t1.h,t1.m);
printf("\n Second Time in HH:MM format:%d:%d",t2.h,t2.m);
if(((t1.h<=12&&t1.h>=0)&&(t1.m<=60&&t1.m>=0))&&((t2.h<=12&&t2.h>=0)&&(t2.m<=60&&t2.m>=0)))
{
t3.h=t1.h+t2.h;
t3.m=t1.m+t2.m;
if(t3.m>=60)
{
t3.h=t3.h+1;
t3.m=t3.m-60;
}
if(t3.h>=25)
{
t3.h=t3.h-24;
}
printf("\n Addition of Times in HH:MM format:%d:%d",t3.h,t3.m);
}
else
{
printf("\n Values Are Wrongly Entered!!!");
}
}
/*
Output:
Please enter first time's of Hour:12
Please enter first time's of Minutes:35
Please enter Second time's of Hour:1
Please enter Second time's of Minutes:35
First Time in HH:MM format:12:35
Second Time in HH:MM format:1:35
Addition of Times in HH:MM format:14:10
*/
