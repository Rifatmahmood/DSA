#include<stdio.h>
int main()
{
 int n;

 scanf("%d", &n); 
 int a[n];

// Read 


for (int i = 0; i < n; i++)
{
 scanf("%d", &a[i]);
}
//print 


// min 
int min = a[0];
int minIndex = 0; 
for (int i = 1; i < n; i++)
{
 if(a[i] < min) {
  min = a[i];
  minIndex = i; 
 }
}



// max 
int max = a[0];
int maxIndex = 0; 
for (int i = 1; i < n; i++)
{
 if(a[i] > max) {
  max = a[i];
  maxIndex = i; 
 }
}


// swapping

int temp = a[minIndex];
a[minIndex] = a[maxIndex];
a[maxIndex] = temp; 
max = temp;

for (int i = 0; i < n; i++)
{
 printf("%d ", a[i]);
}


return 0;
}