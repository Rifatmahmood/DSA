#include<stdio.h>
int main()
{
 int n, s,  k;
 k = 1; 
 scanf("%d", &n);
 s = n - 1; 
 
 for (int i = 1; i <= (n * 2) - 1; i++)
 {
  //space 
  for (int j = 1; j <= s ; j++)
  {
   printf(" ");  
  }

  // star
  for (int j = 1; j <= k ; j++)
  {
   printf("*");  
  }
  printf(" \n");
  if(i <= n - 1) {
  k += 2;
  s--; 
  } else {
   k -= 2;
   s++; 
  }
  
 }

 return 0;
}