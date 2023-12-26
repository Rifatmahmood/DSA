/*
Memo and Momo are playing a game. Memo will choose a positive number 𝑎
, and Momo will choose a positive number 𝑏
.

Your task is to tell them who will win according to the following rules:

If both 𝑎
 and 𝑏
 are divisible by 𝑘
, both of them win and you should print "Both".
If 𝑎
 is divisible by 𝑘
 but 𝑏
 isn't, Memo wins and you should print "Memo".
If 𝑏
 is divisible by 𝑘
 but 𝑎
 isn't, Momo wins and you should print "Momo".
If both 𝑎
 and 𝑏
 are not divisible by 𝑘
, no one wins and you should print "No One".
*/


#include<stdio.h>
int main()
{
 long long int a, b, c;
 scanf("%lld %lld %lld", &a, &b, &c); 

 if(a % c == 0 && b % c == 0) {
  printf("Both");
  }else if(a % c != 0 && b % c != 0){
  printf("No one");
  }else if(a % c == 0 && b % c != 0){
  printf("Memo\n"); 
 } else if (b % c == 0 && a % c != 0) {
  printf("Momo"); 
 }

 
  

 return 0;
}