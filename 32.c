/*A C program to understand structure*/
#include<stdio.h>
void main()
{
struct book
{
char name[20];
int pages;
float price;
};
struct book b1,b2,b3;
printf("\n Enter the names,prices &pages of three books");
scanf("%s%f%d",b1.name,&b1.price,&b1.pages);
scanf("%s%f%d",b2.name,&b2.price,&b2.pages);
scanf("%s%f%d",b3.name,&b3.price,&b3.pages);
printf("\n ------------------------------------------------------------");
printf("\n Display Book Information data:");
printf("\n ------------------------------------------------------------");
printf("\nBook Name Book Price Book Pages");
printf("\n%s %f %d",b1.name,b1.price,b1.pages);
printf("\n%s %f %d",b2.name,b2.price,b2.pages);
printf("\n%s %f %d",b3.name,b3.price,b3.pages);
printf("\n ------------------------------------------------------------");
}
/*Output:
Enter the names,prices &pages of three books
EM1
150
250
BME
200
350
AM
100
200
------------------------------------------------------------
Display Book Information data:
------------------------------------------------------------
Book Name Book Price Book Pages
EM1 150.000000 250
BME 200.000000 350
AM 100.000000 200
------------------------------------------------------------
*/
