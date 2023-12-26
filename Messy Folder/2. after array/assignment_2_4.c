#include<stdio.h>
int main()
{
 int n;
 printf("Enter a number: "); 
 scanf("%d", &n);
 int A[n];
 int sumP = 0;
 int sumN = 0; 

 for (int i = 0; i < n; i++)
 {
  printf("Enter array element %d: ", i + 1);
  scanf("%d", &A[i]); 
  if(A[i] > 0){
   sumP = sumP + A[i]; 
  } else {
   sumN = sumN + A[i]; 
  }
 }
 printf("%d ", sumP); 
 printf("%d ", sumN); 
 return 0;
}