#include<stdio.h>
#include<string.h>
int main()
{
 char name[100];
 scanf("%s", name);
 int len = strlen(name); 
 printf("%d\n", len);

 return 0;
}