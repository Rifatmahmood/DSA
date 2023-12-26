#include<stdio.h>
#include<string.h>
int main()
{
 char S[1000001];
 scanf("%s", S);
 int len = strlen(S);
 int sum = 0; 

 for (int i = 0; i < len; i++)
 {
  sum = sum + (S[i] - 48);
 
 }

 printf("%d", sum); 

 return 0;
}