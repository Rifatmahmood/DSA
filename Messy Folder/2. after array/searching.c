#include<stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 int arr[n];
 int search;

 // input taking in array
 for (int i = 0; i < n; i++)
 {
  scanf("%d ", &arr[i]); 
 }

// search the target number

 scanf("%d", &search);
 int position = -1; 
for (int i = 0; i < n; i++)
{
 if(arr[i] == search){
  position = i;
  break;
 } 
}

printf("%d", position); 

return 0;
}