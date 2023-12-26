#include<stdio.h>
#include<string.h>

int main()
{
 char s[1000001];
 scanf("%s", s);
 int range = 26;
 int frequencyArr[range];
 int len = strlen(s); 

 

 for (int i = 0; i < range; i++)
 {
  frequencyArr[i] = 0; 
 }

 


 for (int i = 0; i < len; i++)
 {
  int alphabet = s[i] - 97;
  frequencyArr[alphabet]++; 
 }


 for (int i = 0; i < range; i++)
 {
  if(frequencyArr[i] != 0 ) {
    printf("%c : %d\n", i + 97, frequencyArr[i]);
  }
  
 }

 return 0; 
}