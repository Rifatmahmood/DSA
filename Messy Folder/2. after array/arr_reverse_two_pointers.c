#include<stdio.h>
int main()
{
 
 int n;
 printf("Enter the size: ");
 scanf("%d", &n);
 int arr[n]; 

  printf("Enter the elements of the arrays: \n");
 for (int i = 0; i < n ; i++)
 {
  
  scanf("%d", &arr[i]); 
 }

// reverse the array

 int temp;
 int i = 0;
 int l = n - 1; 
 while (i < l)
 {
  temp = arr[i]; 
  arr[i] = arr[l];
  arr[l] = temp;
  i++;
  l--; 
  }

 for (int i = 0; i < n; i++)
 {
  printf("%d\n", arr[i]); 
 }
 
 return 0; 
}