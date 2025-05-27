//Example of sizeof() operator
#include<stdio.h>
int main()
{
int ivar = 100;
char cvar = 'a';
float fvar = 10.10;
printf("\n Size of integer variable=%d", sizeof(ivar));
printf("\n Size of character variable=%d", sizeof(cvar));
printf("\n Size of float variable=%d", sizeof(fvar));
}
/*Output :
Turbo C++
Size of integer variable=2
Size of character variable=1
Size of float variable=4
Linux :
there is difference in output
*/
