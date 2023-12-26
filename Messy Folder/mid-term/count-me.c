#include<stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 int arr[n]; 


 for (int i = 0; i < n; i++)
 {
  scanf("%d ", &arr[i]);
 }

 int num2 = 0; 
 int num3 = 0; 

 for (int i = 0; i < n; i++)
 {
  if(arr[i] % 2 == 0) {
   num2++; 
  } else if(arr[i] % 3 == 0) {
   num3++; 
  } else if (arr[i] % 2 == 0 && arr[i] % 3 == 0 ) {
   num2++; 
  }
 }
 printf("%d %d", num2, num3); 
 return 0;
}