#include<stdio.h>
int main()
{
 int x = 10;
 int *ptr;
 ptr = &x;

 int sum = *ptr + *ptr;
 printf("%d", sum); 

 return 0;
}