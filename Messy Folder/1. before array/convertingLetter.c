#include<stdio.h>

int main()
{
 char a;
 
 scanf("%c", &a);
 int ans; 
 if (a >= 97 && a <= 122)
 {
  ans = a - 32;
  printf("%c", ans); 
 }
 else
 {
  ans = a + 32;
  printf("%c", ans); 
 }

 return 0;
}