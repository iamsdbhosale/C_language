// sum of array element
#include<stdio.h>
void main()
{
int i,n,temp,a[5],sum=0;
printf("\n Enter any 5 integer elements:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
printf("\n Addition of all array Elements=%d",sum);
}
/*
Output:
Enter any 5 integer elements:
1
2
3
4
5
Addition of all array Elements=15
*/
