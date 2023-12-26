#include<stdio.h>
int main()
{
 int n, s, k;
 scanf("%d", &n);
 s = 0;
 k = n + 2; 




 for (int i = 1; i <= n; i++)
 {

 // space 
 for (int i = 1; i <= s; i++)
 {
   printf(" "); 
 }



  // star 
  for (int i = 1; i <= k; i++)
  {
   printf("*"); 
  }

 printf("\n"); 
 k -= 2;
 s++; 
 }

 return 0;
}