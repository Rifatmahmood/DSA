#include<stdio.h>
void sum(int *p) {
 *p = *p * *p;
}

int main()
{
 int x = 10;
 sum(&x);
 printf("%d", x); 

 return 0;
}