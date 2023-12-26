#include<stdio.h>

/*
Problem02:
Write a function that takes an integer input and prints EVEN if the number is divisible
by 2, otherwise prints ODD. Call this function from the main function.

Problem03:
Write a function that takes an integer as input and prints all of its divisors.
Call this function from the main function.
*/
void print_msg(){
 printf("Hi! What's up?"); 
}
// solution 2 
void even_or_odd(int x){
if(x % 2 == 0) {
 printf("EVEN\n"); 
}else{
 printf("ODD\n"); 
}
}
// solution 3
void divisors(int x){
 for (int i = 0; i <= x; i++)
 {
  if(x % i == 0) {
   printf("%d\n", i); 
  }
 }
 
}

int main()
{

 divisors(34); 
 return 0;
}