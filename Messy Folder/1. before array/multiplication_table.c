#include<stdio.h>
int main()
{
 int N;
 int result; 
 
 scanf("%d", &N); 
 for (int i = 1; i < 13; i++)
 {
  result = i * N;
  printf("%d * %d = %d\n", N, i, result);
 }

 return 0; 
}