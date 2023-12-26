/*
Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.
*/


#include<stdio.h>
int main()
{
 int n, m, x;
     do {
        printf("Enter the size of the square matrix (must be 2 or greater): ");
        scanf("%d %d", &n, &m);
        
        if (n < 2  && m < 2) {
            printf("Invalid input. Size must be 2 or greater. Please try again.\n");
        }
    } while (n < 2 && m < 2);

 scanf("%d",  &x);
 int arr[n][m]; 

 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
  {
   scanf("%d", &arr[n][m]); 
  }
  }

  int flag = 1; 

  for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
  {
   if(x == arr[i][j]) {
    flag = 0; 
    break;
   }
  }
  }
if (flag == 0)
{
 printf("will not take number");
} else {
 printf("will take number");
}

  
 return 0;
}