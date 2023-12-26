#include<stdio.h>

/*Take a two dimensional array of integer data type of size [3 * 3].
Take the values from the user using scanf(). Now print the average of all the values.*/
int main()
{
 int arr[3][3]; 
 // read the values 
 for (int i = 0; i < 3; i++)
 {
   printf("Enter value: "); 
  for (int j = 0; j < 3; j++)
  {
   scanf("%d", &arr[i][j]);
  }
 }

 // print the values 
 
  for (int i = 0; i < 3; i++)
 {
  for (int j = 0; j < 3; j++)
  {
   printf("%d ", arr[i][j]); 
  }
  printf("\n"); 
 }
 return 0;
}