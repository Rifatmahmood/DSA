#include<stdio.h>
int main()
{
 int a, b, c;
 printf("ENTER: ");
 scanf("%d %d %d", &a, &b, &c);
 int min = a, max = a;

 if(a < min)
 {
  min = a; 
 }

if( a > max) 
{
  max = a; 
}
 if(b < min)
 {
  min = b; 
 }

if( b > max) 
{
  max = b; 
}
 if(c < min)
 {
  min = c; 
 }

if( c > max) 
{
  max = c; 
}
printf("%d %d", min, max); 
return 0;
}