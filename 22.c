/* A C program to understand switch case statement*/
#include<stdio.h>
#include<stdlib.h> // for linux
//#include<process.h> //for turbo c++
void main()
{
int a,b,add,sub,mul,div,rem,ch;
printf("\n -----------------------------------------------------");
printf("\n MENU");
printf("\n -----------------------------------------------------");
printf("\n Press 1 to add two integer values");
printf("\n Press 2 to subtract two integer values");
printf("\n Press 3 to multiply integer values");
printf("\n Press 4 to divide two integer values");
printf("\n Press 5 to find out remainder");
printf("\n Press 6 to Exit");
printf("\n -----------------------------------------------------");
printf("\n Please enter your choice=");
scanf("%d",&ch);
if(ch==1||ch==2||ch==3||ch==4||ch==5)
{
printf("\n Please enter value of a=");
scanf("%d",&a);
printf("\n Please enter value of b=");
scanf("%d",&b);
}
switch(ch)
{
case 1:
add=a+b;
printf("\n Addition=%d",add);
break;
case 2:
add=a-b;
printf("\n Subtraction=%d",sub);
break;
case 3:
add=a*b;
printf("\n Multiplication=%d",mul);
break;
case 4:
add=a/b;
printf("\n Division=%d",div);
break;
case 5:
add=a%b;
printf("\n Remainder=%d",rem);
break;
case 6:
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
Press 1 to add two integer values
Press 2 to subtract two integer values
Press 3 to multiply integer values
Press 4 to divide two integer values
Press 5 to find out remainder
Press 6 to Exit
-----------------------------------------------------
Please enter your choice=1
Please enter value of a=12
Please enter value of b=2
Addition=14
*/
