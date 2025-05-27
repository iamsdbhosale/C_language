/* A C program Menu driven*/
/*
input choice is single character
*/
#include<stdio.h>
//#include<process.h> // for turbo c++
#include<stdlib.h>
void main()
{
int a,b,add,sub,mul,div,rem;
char ch;
printf("\n -----------------------------------------------------");
printf("\n MENU");
printf("\n -----------------------------------------------------");
printf("\n Press + to add two integer values");
printf("\n Press - to subtract two integer values");
printf("\n Press * to multiply integer values");
printf("\n Press / to divide two integer values");
printf("\n Press %% to find out remainder"); //%% for terminal
printf("\n Press E to Exit");
printf("\n -----------------------------------------------------");
printf("\n Please enter your choice=");
scanf("%c",&ch);
if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
{
printf("\n Please enter value of a=");
scanf("%d",&a);
printf("\n Please enter value of b=");
scanf("%d",&b);
}
switch(ch)
{
case '+':
add=a+b;
printf("\n Addition=%d",add);
break;
case '-':
add=a-b;
printf("\n Subtraction=%d",sub);
break;
case '*':
add=a*b;
printf("\n Multiplication=%d",mul);
break;
case '/':
add=a/b;
printf("\n Division=%d",div);
break;
case '%':
add=a%b;
printf("\n Remainder=%d",rem);
break;
case 'E':
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
Press + to add two integer values
Press - to subtract two integer values
Press * to multiply integer values
Press / to divide two integer values
Press % to find out remainder
Press E to Exit
-----------------------------------------------------
Please enter your choice=+
Please enter value of a=12
Please enter value of b=2
Addition=14
*/
