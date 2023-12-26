#include<stdio.h>
int main()
{
 int row, col;
 scanf("%d %d", &row, &col);
 int arr[row][col]; 
 int ans = 1; 
 if(row != col){
  ans = 0; 
 } else {
for (int i = 0; i < row; i++)
 {
  for (int j = 0; j < col; j++)
  {
   scanf("%d", &arr[i][j]); 
  }
 }

 // primary check 
 for (int i = 0; i < row; i++)
 {
  for (int j = 0; j < col; j++)
  {
   if(i == j && arr[i][j] != 1){
    ans = 0;
   } 
  }
 }

// secondary check 
 for (int i = 0; i < row; i++)
{
  if(arr[i][row - i - 1] != 1){
   ans = 0; 
}
}

// other check 
for (int i = 0; i < row; i++)
{
 for (int j = 0; j < col; j++)
 {
  if (i != j && i != row - j - 1 && arr[i][j] != 0) {
                ans = 0;
 }
 
}
}
 }
 

if(ans){
  printf("YES"); 
} else {
  printf("NO"); 
}
 return 0;
}