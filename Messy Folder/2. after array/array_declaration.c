#include<stdio.h>
int main()
{
 int arr[12]; 
 for (int i = 0; i <= 11; i++)
 {
   printf("Enter a number %d: ", i);
   scanf("%d", &arr[i]); 
 }

 for (int i = 0; i <= 11; i++)
 {
printf("%d\t", arr[i]); 
 }
 
 
 return 0;
}