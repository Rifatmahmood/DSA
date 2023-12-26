#include<stdio.h>
#include<string.h>

int main()
{
 char S[999];
 scanf("%s", S);
 int length = strlen(S);

 int i = 0; 
 int j = length - 1;
 int is_palindrome = 1; 

 while (i < j) {
  if(S[i] != S[j]) {
   is_palindrome = 0; 
   break;
  }
  i++;
  j--; 
 }

 if(is_palindrome) {
  printf("YES");
 }else{
  printf("NO"); 
 }

 return 0;
}