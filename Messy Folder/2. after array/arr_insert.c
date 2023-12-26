#include<stdio.h>
int main()
{
 int n;
 printf("Enter the size: ");
 scanf("%d", &n);
 int arr[n + 1]; 


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

 int pos, val;
 printf("Enter the position and value");
 scanf("%d %d", &pos, &val);



 for (int i = n; i >=pos + 1  ; i--)
 {
  arr[i] = arr[i - 1];
 }

 arr[pos - 1] = val; 
 printf("The inserted array: ");

 for (int i = 0; i <= n; i++)
 {
  printf("%d\t", arr[i]); 
 }

 return 0;
}