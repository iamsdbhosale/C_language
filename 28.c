/*A C program to display transpose matrix for given matrix*/
#include<stdio.h>
void main()
{
int a[3][3],i,j;
printf("\nEnter the element in two dimention array");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Matrix\n");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("\t%d",a[i][j]);
}
}
printf("\n Transpose matrix \n");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("\t%d",a[j][i]);
}
}
}
/*
Output:
Enter the element in two dimention array1
1
1
2
2
2
3
3
3
Matrix
1 1 1
2 2 2
3 3 3
Transpose matrix
1 2 3
1 2 3
1 2 3
*/
