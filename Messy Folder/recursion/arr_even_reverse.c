/*
Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

7
1 5 8 2 3 9 11
11 3 8 1 

*/
#include<stdio.h>
void print_even(int arr[], int n, int index)
{

if (index < 0) {return;} 
else if(index % 2 == 0)
{
printf("%d ", arr[index]);
}
print_even(arr, n, index - 1); 
}

int main()
{
 int n;
 scanf("%d", &n);
 int index = n - 1; 
 int arr[n];
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]); 
 }
 print_even(arr, n, index); 

 return 0;
}