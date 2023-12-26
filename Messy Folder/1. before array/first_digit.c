#include<stdio.h>
int main(){
int x;
printf("ENTER: "); 
scanf("%d", &x);
x = x / 1000; 

if( x % 2 == 0)
{
 printf("EVEN");
}else{
 printf("ODD"); 
}

return 0;
}