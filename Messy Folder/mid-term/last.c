#include<stdio.h>
#include<string.h>
int main()
{
 int t;
 scanf("%d", &t); 

 for (int i = 0; i < t; i++)
 {
 int n;
 scanf("%d", &n);

 // read the element of array 
 int arr[n]; 
   for (int i = 0; i < n; i++)
  {
   scanf("%d", &arr[i]); 
  }

 int x;
 scanf("%d", &x);
 int available = 0; 

 for (int i = 0; i < n; i++)
 {
   if(arr[i] == x) {
   
    available++;
    break;
   }
  }

if(available == 1){
   printf("YES\n"); 
} else {
   printf("NO\n"); 
}
 }


 return 0;
}