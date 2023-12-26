#include<stdio.h>
int main()
{
 int t;
 int num;
 int digit; 

 scanf("%d", &t); 


 for (int i = 0; i < t; i++){

 scanf("%d", &num); 
  
do
 {
  digit = num % 10;
  printf("%d ", digit);
  num = num / 10;
 }

 while (num != 0);
 printf("\n");
 }

  while (num != 0)return 0;
}
 
