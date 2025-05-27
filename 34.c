// Program demonstrating use of Union
//it is executed in turbo c++
#include<stdio.h>
void main()
{
union student
{
int rno;
char name[20];
}u1,u2;
printf("\n ---------------------------------");
printf("\n Use of Union:\n");
printf("\n ---------------------------------");
printf("\n Please enter name of the first student=");
scanf("%s",&u1.name);
printf("\n Please enter roll number of the first student=");
scanf("%d",&u1.rno);
printf("\n ---------------------------------");

printf("\n ---------------------------------");
printf("\n Please enter name of the second student=");
scanf("%s",&u2.name);
printf("\n Please enter roll number of the first student=");
scanf("%d",&u2.rno);
printf("\n ---------------------------------");
printf("\n Displaying of Record with Union:\n");
printf("\n ---------------------------------");
printf("\n Record of student information:\n");
printf("\n Roll Number:%d",u1.rno);
printf("\n Name of the student:%s",u1.name);
}

