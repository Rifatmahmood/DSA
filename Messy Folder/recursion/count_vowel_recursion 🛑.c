#include<stdio.h>
int count_vowel(char s[], int i){
 // base case 
 if(s[i] == '\0') {
  return 0;} 

 int answer = count_vowel(s, i + 1);
 // converting to small case 
 if(s[i] >= 'A' && s[i] <= 'Z'){
  s[i] = s[i] + 32; 
 } 
 // finding vowels 
 if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e') {
  return answer + 1; 
 } else {
  return answer; 
 }
}

int main()
{
 char s[205];
 fgets(s, 205, stdin);
 int vowel_count = count_vowel(s, 0);
 printf("%d", vowel_count); 
 return 0;
}