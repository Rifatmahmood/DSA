#include<stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 char arr[n]; 
 getchar();



 for (int i = 0; i < n; i++)
 {
  scanf("%c", &arr[i]); 
 }
 int sum = 0; 

 for (int i = 0; i < n; i++)
 {
  sum = sum + (arr[i] - 48); 
 }

 printf("%d", sum); 

 return 0;
}