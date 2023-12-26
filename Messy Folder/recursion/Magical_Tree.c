/*
     *
    ***
   *****
  *******
 *********
***********
     *
     *
     *
     *
     *

       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
     *****
     *****
     *****
     *****
     *****
    
*/
#include <stdio.h>

int main() {
    int n;
    int base = 5; 
    scanf("%d", &n);
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
     if (i % 2 != 0)
     {
      // i is odd
      count++;
     } 
    }
    int treeHead = base + count;
    int space = treeHead - 1;
    int star = 1; 

    // Print Treehead
    for (int i = 0; i < treeHead; i++)
    {
     // Print spaces
     for (int j = 0; j < space; j++)
     {
      printf(" ");
     }

     // Print asterisks
     for (int k = 0; k < star; k++)
     {
      printf("*");
     }
     space--;
     star += 2; 

     printf("\n");
     }
  
     // Print lower part of the pattern
     for (int i = 0; i < base; i++)
     {
      // Print spaces
      for (int j = 0; j < base; j++)
      {
       printf(" ");
      }

      // Print asterisks
      for (int k = 0; k < n; k++)
      {
       printf("*");
      }

      printf("\n");
     }

     return 0;
    }
