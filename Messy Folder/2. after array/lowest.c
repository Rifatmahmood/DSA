#include<stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 int A[n];
 int lowest; 
 for (int i = 0; i < n; i++)
 {
  //read the numbers
  scanf("%d", &A[i]); 
  // positions
}
lowest = A[0];
int position = 1; 
for (int i = 1; i < n; i++)
{
  if (A[i] < lowest){
    lowest = A[i];
    position = i + 1;
    break;
  }
 }
 printf("%d %d", lowest, position); 

 return 0;
}