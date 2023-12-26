/*
Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

*/


#include<stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 int arr[n][n]; 
 // reading the data 
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
  {
   scanf("%d", &arr[i][j]);
  }
  }

  // summation of primary diagonal
  int sumPrimary = 0; 
  for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
  {
   if(i == j) {
    sumPrimary += arr[i][j]; 
   }
  }
  }
  

  // summation of primary diagonal
  int sumSecondery = 0; 

  for (int i = 0; i < n; i++)
  {
  sumSecondery += arr[i][n - 1 - i]; 
  }
  int difference = sumPrimary - sumSecondery; 
  if (difference < 0) {
  difference *= -1;
  printf("%d", difference); 
  }
  else
  {
  printf("%d", difference); 
  }
  return 0;
}