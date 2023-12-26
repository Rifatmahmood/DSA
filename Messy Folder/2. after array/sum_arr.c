#include<stdio.h>
int main()
{
 int sum = 0;
 int n; 
 
 printf("Enter a number: ");
 scanf("%d", &n);
 int arr[n]; 
// input for an array 
 for (int i = 0; i < n; i++)
 {
  printf("Enter the array number %d: ", i + 1);
  scanf("%d", &arr[i]); 
  sum = sum + arr[i];
 }

  printf("%d", sum); 

 return 0;
}