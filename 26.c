/* program for display element from the array*/
/*
Accepting 5 elements in 1D array by using single for loop and displaying elements on output screen
*/
#include<stdio.h>
void main()
{
int i,n,temp,a[5];
printf("\n Enter 5 array elements:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n Display array elements\n");
for(i=0;i<5;i++)
{
printf("\t%d",a[i]);
}
}
/*
Output:
Enter 5 array elements:
1
2
3
4
5
Display array elements
1 2 3 4 5
*/
