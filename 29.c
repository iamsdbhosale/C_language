//program for addition of two matrices where order of two matrices are 3X3
#include<stdio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j;
printf("\n Please enter 9 elements in 1st Matrix");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Please enter 9 elements in 2nd Matrix");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\n First Matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("\t %d",a[i][j]);
}
printf("\n");
}
printf("\n Second Matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("\t %d",b[i][j]);
}
printf("\n");
}
printf("\n Display Addition multiplication\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("\t %d",c[i][j]);
}
printf("\n");
}
}
/*
output:
Please enter 9 elements in 1st Matrix1
1
1
1
1
1
1
1
1
Please enter 9 elements in 2nd Matrix2
2
2
2
2
2
2
2
2
First Matrix
1 1 1
1 1 1
1 1 1
Second Matrix
2 2 2
2 2 2
2 2 2
Display Addition multiplication
3 3 3
3 3 3
3 3 3
*/
