#include<stdio.h>
#include<string.h>

int main()
{

 char name[14];
 fgets(name, 14, stdin);
 printf("%s", name); 

 return 0;
} 