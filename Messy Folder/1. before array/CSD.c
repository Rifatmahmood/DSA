#include<stdio.h>
int main()
{
 char x;
 scanf(" %c", &x); 
if(x >= 48 && x <= 57)
{
 printf("IS DIGIT\n"); 
}

if(x >= 65 && x <= 90)
{
 printf("ALPHA\n");
 printf("IS CAPITAL\n");

}

if(x >= 97 && x <= 122)
{
printf("ALPHA\n");
 printf("IS SMALL\n");
}

 return 0;
}