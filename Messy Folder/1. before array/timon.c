#include<stdio.h>
int main()
{
 int a, b; 

 scanf("%d %d", &a, &b);
 int hasTimon = a - b; 

 if (hasTimon < 0)
 {
  printf("%d", 0);
 }
 else
 {
  printf("%d", hasTimon); 
 }


 return 0;
}