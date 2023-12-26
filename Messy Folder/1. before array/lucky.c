#include<stdio.h>
int main()
{
 int num; 

 scanf("%d", &num); 

 if( num >= 10 && num <=99)
 {
  int firstD = num / 10;
  int secondD = num % 10; 

  if (firstD % secondD == 0 || secondD % firstD == 0){
   printf("YES"); 
  }
  else{
   printf("NO");

  }
 }

 return 0; 
}