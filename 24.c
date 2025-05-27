/* A C program to understand switch case statement*/
#include<stdio.h>
//#include<process.h>//for turbo c++
#include<stdlib.h>
void main()
{
int r,l,b,ar,pr,ch;
float ac,cc,pi;
printf("\n -----------------------------------------------------");
printf("\n MENU");
printf("\n -----------------------------------------------------");
printf("\n Press 1 to calculate area of circle");
printf("\n Press 2 to calculate circumference of circle");
printf("\n Press 3 to calculate area of rectangle");
printf("\n Press 4 to calcualte perimeter of rectangle");
printf("\n Press 5 to Exit");
printf("\n -----------------------------------------------------");
printf("\n Please enter your choice=");
scanf("%d",&ch);
if(ch==1||ch==2)
{
printf("\n Please enter value of Radius=");
scanf("%d",&r);
pi=3.14;
}
else if(ch==3||ch==4)
{
printf("\n Please enter value of l=");
scanf("%d",&l);
printf("\n Please enter value of b=");
scanf("%d",&b);
}
switch(ch)
{
case 1:
ac=pi*r*r;
printf("\n Area of Circle=%f",ac);
break;
case 2:
cc=2*pi*r;
printf("\n Circumference of circle=%f",cc);
break;
case 3:
ar=l*b;
printf("\n Area of Rectangle=%d",ar);
break;
case 4:
pr=2*(l+b);
printf("\n Perimeter of Rectangle=%d",pr);
break;
case 5:
exit(5);
default:
printf("\n Your choice is Wrong!!!");
}
}
/*
output:
-----------------------------------------------------
MENU
-----------------------------------------------------
Press 1 to calculate area of circle
Press 2 to calculate circumference of circle
Press 3 to calculate area of rectangle
Press 4 to calcualte perimeter of rectangle
Press 5 to Exit
-----------------------------------------------------
Please enter your choice=1
Please enter value of Radius=1
Area of Circle=3.140000
*/
