#include<stdio.h>
int main()
{
 int n, p;
 scanf("%d %d", &n, &p); 

 for (int i = 0; i < n; i++)
 {
  for (int i = 1; i <= p; i++)
  {
   printf("%d ", i); 

  }
  printf("\n"); 
 }

 return 0;
}