#include<stdio.h>
void sort( int x, int y, int z){
  if( x > y) {
  int temp = x;
  x = y;
  y = temp;
 }; 
 if(x > z) {
  int temp = z;
  x = z;
  z = temp; 
 }
 if ( y > z) {
  int temp = y;
  y = z;
  z = temp;
 };
 printf("%d\n%d\n%d\n", x, y, z); 
 printf(" \n"); 
}

int main()
{
 int x, y, z;
 scanf("%d %d %d", &x, &y, &z);
 sort(x, y, z);
 
 printf("%d\n%d\n%d", x, y, z);

 return 0;
}