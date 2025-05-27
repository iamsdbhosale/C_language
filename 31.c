/*A C program to understand string handling function*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>//for handling string functions
void main()
{
char s1[50],s2[50];
int ch;
printf("\n -------------------------------------------------------");
printf("\n MENU");
printf("\n -------------------------------------------------------");
printf("\n Press 1 to count lenght of first string:");
printf("\n Press 2 to display reverse string of first string:");
printf("\n Press 3 to compare first and second strings:");
printf("\n Press 4 to display first string in capital letters:");
printf("\n Press 5 to display first string in small letters");
printf("\n Press 6 to combine two strings");
printf("\n Press 7 to exit");
printf("\n -------------------------------------------------------");
printf("\n Please enter your choice=");
scanf("%d",&ch);
if(ch==1||ch==2||ch==4||ch==5)
{
printf("\n Please enter first string:");
scanf("%s",&s1);
}
if(ch==3||ch==6)
{
printf("\n Please enter First string:");
scanf("%s",&s1);
printf("\n Please enter Second string:");
scanf("%s",&s2);
}
switch(ch)
{
case 1:
printf("\n Length of first string=%d",strlen(s1));
break;
case 2:
printf("\n First string in reverse order=%s",strrev(s1));
break;
case 3:
if(strcmp(s1,s2)==0)
{
printf("\n Both Strings are same");
}
else
{
printf("\n Both Strings are different");
}
break;
case 4:
printf("\n First string in capital letters=%s",strupr(s1));
break;
case 5:
printf("\n First string in small letters=%s",strlwr(s1));
break;
case 6:
printf("\n Combination of two strings=%s",strcat(s1,s2));
break;
case 7:
exit(5);
default:
printf("\n Wrong Choice!!!");
}
}
/*
Output:
-------------------------------------------------------
MENU
-------------------------------------------------------
Press 1 to count lenght of first string:
Press 2 to display reverse string of first string:
Press 3 to compare first and second strings:
Press 4 to display first string in capital letters:
Press 5 to display first string in small letters
Press 6 to combine two strings
Press 7 to exit
-------------------------------------------------------
Please enter your choice=1
Please enter first string:SVERI
Length of first string=5
*/

/*
Linux Terminal :
sdbhosale@humanrobot:~/C_language$ gcc 31.c
31.c: In function ‘main’:
31.c:25:9: warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘char (*)[50]’ [-Wformat=]
 scanf("%s",&s1);
        ~^  ~~~
31.c:30:9: warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘char (*)[50]’ [-Wformat=]
 scanf("%s",&s1);
        ~^  ~~~
31.c:32:9: warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘char (*)[50]’ [-Wformat=]
 scanf("%s",&s2);
        ~^  ~~~
31.c:37:36: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘size_t {aka long unsigned int}’ [-Wformat=]
 printf("\n Length of first string=%d",strlen(s1));
                                   ~^  ~~~~~~~~~~
                                   %ld
31.c:40:46: warning: implicit declaration of function ‘strrev’; did you mean ‘strsep’? [-Wimplicit-function-declaration]
 printf("\n First string in reverse order=%s",strrev(s1));
                                              ^~~~~~
                                              strsep
31.c:40:43: warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int’ [-Wformat=]
 printf("\n First string in reverse order=%s",strrev(s1));
                                          ~^  ~~~~~~~~~~
                                          %d
31.c:53:48: warning: implicit declaration of function ‘strupr’; did you mean ‘strstr’? [-Wimplicit-function-declaration]
 printf("\n First string in capital letters=%s",strupr(s1));
                                                ^~~~~~
                                                strstr
31.c:53:45: warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int’ [-Wformat=]
 printf("\n First string in capital letters=%s",strupr(s1));
                                            ~^  ~~~~~~~~~~
                                            %d
31.c:56:46: warning: implicit declaration of function ‘strlwr’; did you mean ‘strlen’? [-Wimplicit-function-declaration]
 printf("\n First string in small letters=%s",strlwr(s1));
                                              ^~~~~~
                                              strlen
31.c:56:43: warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int’ [-Wformat=]
 printf("\n First string in small letters=%s",strlwr(s1));
                                          ~^  ~~~~~~~~~~
                                          %d
/usr/bin/ld: /tmp/cc5wwMoT.o: in function `main':
31.c:(.text+0x222): undefined reference to `strrev'
/usr/bin/ld: 31.c:(.text+0x28e): undefined reference to `strupr'
/usr/bin/ld: 31.c:(.text+0x2b4): undefined reference to `strlwr'
collect2: error: ld returned 1 exit status

*/
