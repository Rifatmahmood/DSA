#include<stdio.h>
#include<string.h>
int main()
{
 int t;
 scanf("%d", &t); 

 for (int i = 0; i < t; i++)
 {
  char s[10001];
  scanf("%s", s);
  int len = strlen(s);
  int capital, small, digits;
  capital = 0;
  small = 0;
  digits = 0;

  for (int i = 0; i < len; i++)
  {
   if(s[i] >= 65 && s[i] <= 90) {
    capital++; 
   } else if(s[i] >= 97 && s[i] <= 122) {
    small++;
   } else if(s[i] >= 48 && s[i] <= 57) {
    digits++; 
   }
  }

  printf("%d %d %d\n", capital, small, digits); 
 }

 return 0;
}