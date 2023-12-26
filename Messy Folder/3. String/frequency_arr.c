/*
Given 2 numbers 𝑁
, 𝑀
 and an array 𝐴
 of 𝑁
 numbers. For every number from 1 to 𝑀
, print how many times this number appears in this array.

Input
First line contains two numbers 𝑁
, 𝑀
 (1≤𝑁≤105,1≤𝑀≤105)
.

Second line contains 𝑁
 numbers (1≤𝐴𝑖≤𝑀)
.

Output
Print 𝑀
 lines, the 𝑖𝑡ℎ
 line should contain number of times that the number 𝑖
 appears in 𝐴
*/

#include<stdio.h>
int main()
{
 int n, m;
 scanf("%d %d", &n, &m);
 int frequencyArr[m + 1];


 int arr[n]; 
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]); 
 }
 for (int i = 0; i <= m; i++)
 {
  frequencyArr[i] = 0; 
 }

 for (int i = 0; i < n; i++)
 {
  if(arr[i] <= m){
   int val = arr[i];
   frequencyArr[val]++; 
  }
 }

 for (int i = 1; i <= m ; i++)
 {
  printf("%d\n", frequencyArr[i]); 
 }

 return 0;
}