#include<stdio.h>
int main()
{
 int n;
 printf("Enter the size: ");
 scanf("%d", &n);
 int arr[n]; 


 for (int i = 0; i < n ; i++)
 {
  printf("Enter the elements of the arrays: ");
  scanf("%d", &arr[i]); 
 }

 printf("The array: \n"); 

 for (int i = 0; i < n; i++)
 {
  printf("%d\t", arr[i]); 
 }
 printf("\n"); 
 int pos;
 printf("Enter the position for Deletation: ");
 scanf("%d", &pos);



 for (int i = pos - 1; i < n - 1; i ++)
 {
  arr[i] = arr[i + 1];
 }


 printf("The inserted array: ");

 for (int i = 0; i < n - 1; i++)
 {
  printf("%d\t", arr[i]); 
 }

 return 0;
}