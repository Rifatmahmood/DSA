#include<stdio.h>
int summation(int arr[], int n, int index){

if(index > n){
 return 0;
 } else {
 int sum = arr[index] + summation(arr, n, index + 1);
  return sum; 
 }
 
}

int main()
{
 int n;
 scanf("%d", &n);
 int index = 0; 
 int arr[n];
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]); 
 }
 int result = summation(arr, n, index);
 printf("%d", result); 
 return 0;
}