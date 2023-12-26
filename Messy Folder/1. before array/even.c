#include<stdio.h>
int main()
{

 int N;

 scanf("%d", &N);
  if( N > 1) {
   for (int i = 2; i <= N; i = i + 2)
 {
  printf("%d\n", i);
 }

 } else {
 printf("-1"); 
 }

 return 0;
}