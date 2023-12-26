#include<stdio.h>
int main()
{
 char S[1000001];
 fgets(S, 1000001, stdin);

 
 char C = '\\';
 char T[1000001]; 

 int i = 0;
 while (S[i] != C)
 {
  T[i] = T[i] = S[i];
  i++; 
 }

 printf("%s", T); 

 return 0;
}