#include<stdio.h>
#include<limits.h>

int search_max(int arr[], int n, int index){
 //base case 
 if(index == n) {
  return INT_MIN; 
 }
 int mx = search_max(arr, n, index + 1); 
 if(arr[index] > mx) {
  return arr[index]; 
 } else {
  return mx; 
 }


}
int main()
{
 int n;
 scanf("%d", &n);
 int arr[n]; 
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]); 
 }

 int mx = search_max(arr, n, 0);
 printf("%d", mx); 

 return 0;
}