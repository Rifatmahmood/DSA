#include<stdio.h>
#include<string.h>

int main()
{
 char S[100001];
 fgets(S, 100001, stdin); 

 for (int i = 0; i < strlen(S); i++)
 {
  if(S[i] == 44) {
   S[i] = 32; 
  } else if ( S[i] >= 97 && S[i] <= 122) {
   S[i] = S[i] - 32;
  }
  else if (S[i] >= 65 && S[i] <= 90)
  {
   S[i] = S[i] + 32; 
  }
 }

 printf("%s", S); 
 return 0;
}




/*
Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
*/