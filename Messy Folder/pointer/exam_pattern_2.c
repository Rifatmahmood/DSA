/*
    1
   21
  321
 4321
54321

my output
    1
   12
  123
 1234
12345
*/

#include<stdio.h>
int main()
{
 int n, s, k;
 scanf("%d", &n);
 s = n - 1;
 k = 1; 

 for (int i = 1; i <= n; i++)
 {
  // space 
  for (int i = 1; i <= s; i++)
  {
   printf(" "); 
  }
  // numbering 
  for (int j = i; j >= 1; j--)
  {
   printf("%d", j); 
  }
  printf("\n");
  s--;
 }

 return 0; 
}