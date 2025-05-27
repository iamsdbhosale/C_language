//Example : C Program to Verify Arithmetic Operator and Operation
#include <stdio.h>
int main()
{
int num1,num2;
int sum,sub,mult,div,mod;
printf("\nEnter First Number :");
scanf("%d",&num1);
printf("\nEnter Second Number :");
scanf("%d",&num2);
sum = num1 + num2;
printf("\nAddition is : %d",sum);
sub = num1 - num2;
printf("\nSubtraction is : %d",sub);
mult = num1 * num2;
printf("\nMultiplication is : %d",mult);
div = num1 / num2;
printf("\nDivision is : %d",div);
mod = num1 % num2;
printf("\nModulus is : %d",mod);
printf("\n"); //this is for termianl 
return(0);
}
