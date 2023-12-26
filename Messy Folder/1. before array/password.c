#include<stdio.h>
int main()
{
 int givenPass; 
 int correctPassword = 1999;
 
while(scanf("%d", &givenPass) != EOF)
{
if(givenPass == correctPassword) 
{
 printf("Correct\n"); 
 break;
}else {

printf("Wrong\n");
}
}
return 0;
}