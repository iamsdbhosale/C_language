/*A C program to understand difference between structure and union*/
//executed in turbo c++
#include<stdio.h>
#include<conio.h>
void main()
{
union student1
{
int rno;
char name[20];
}u1;
struct student2
{
int rno;
char name[20];
}s1;
clrscr();
printf("\n ---------------------------------");
printf("\n Use of Structure:\n");
printf("\n ---------------------------------");
printf("\n Please enter roll number=");
scanf("%d",&s1.rno);
printf("\n Please enter name of the student=");
scanf("%s",&s1.name);
printf("\n Number of bytes required to store information \n Using
structure=%d",sizeof(s1));
printf("\n ---------------------------------");
printf("\n Use of Union:\n");
printf("\n ---------------------------------");
printf("\n Please enter roll number=");
scanf("%d",&u1.rno);
printf("\n Please enter name of the student=");
scanf("%s",&u1.name);
printf("\n Number of bytes required to store information \n Using union=%d",sizeof(u1));
getch();
}
/*
Output:
---------------------------------
Use of Structure:
---------------------------------
Please enter roll number=1
Please enter name of the student=Rahul
Number of bytes required to store information
Using structure=22
---------------------------------
Use of Union:
---------------------------------
Please enter roll number=2
Please enter name of the student=Ganesh
Number of bytes required to store information
Using union=20
*/
