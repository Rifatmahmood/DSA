#include<stdio.h>
int sorting(int arr[], int n, int index){
 for (int i = 0; i < n -1; i++)
 {
  int max = arr[i]; 
  for (int j = i + 1; j < n; j++)
  {
   if(arr[j] > arr[i]){
    max = arr[j]; 
   }
  }
  int temp = max;
  max = arr[j]; 
  
 }
}

int main()
{
 int n, k;
 scanf("%d %d", &n, &k);
 int arr[n]; 
 for (int i = 0; i < n; i++)
 {
  scanf("%d", arr[i]); 
 }

int sortedArr[] = sorting(arr, n, 0);
for (int j = 0; j < n; j++)
{
 printf("%d", sortedArr[j]); 
}


return 0;
}