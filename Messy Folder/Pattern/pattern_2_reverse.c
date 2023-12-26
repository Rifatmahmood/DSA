#include<stdio.h>
int main()
{
 int n, s, k;
 scanf("%d", &n);
 s = 0;
 k = n + 2; 
 for (int i = 0; i < n; i++)
 {
 
  // star creation
  for (int j = 1; j <= s; j++)
  {
   printf(" "); 
  }
  for (int j = 1; j <= k; j++)
  {
   printf("*"); 
  }

   printf("\n");
   k -= 2;
   s++; 
 }

 return 0;
}