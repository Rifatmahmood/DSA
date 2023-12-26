#include<stdio.h>
#include<string.h>
int is_palindrome(char *s){
    int len = strlen(s);
    int i = 0;
    int j = len - 1;
    int plindrome = 1; 

while (i < j)
{
 if(s[i] != s[j]){
  plindrome = 0; 
 }

 i++;
 j--; 
}

return plindrome; 
}

int main()
{
 char s[1001];
 scanf("%s", s);
 int palindrome = is_palindrome(s);

     if(palindrome){
     printf("Palindrome");
     }
     else
     {
     printf("Not Palindrome");
     };
 return 0;
}