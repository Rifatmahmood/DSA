#include<stdio.h>
int main()
{
 int n, s, k, hypen;
 scanf("%d", &n);
 k = 1;
 s = n - 1;
 hypen = 1; 

 for (int i = 1; i <= (n * 2) - 1; i++)
 {
  // space 
  for (int j = 1; j <= s; j++)
  {
   printf(" "); 
  }
  // hashtag as k; if it is odd; 
  if (i % 2 != 0)
     {
      for (int i = 1; i <= k; i++)
     {
      printf("#"); 
     }
     } else {

  //hypen as k; if it is even;
      for (int i = 1; i <= k; i++)
     {
      printf("-"); 
     }

     }
  printf("\n"); 
  if(i <= n - 1) {
  k += 2;
  s--; 
  } else {
   k -= 2;
   s++; 
  }

  }
 

 return 0;
}; 