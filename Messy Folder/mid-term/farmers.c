#include<stdio.h>
int main()
{

 int t;
 scanf("%d", &t);

 // getchar(); 
 for (int i = 0; i < t; i++)
 {
  int M1, M2, D;
 scanf("%d %d %d", &M1, &M2, &D);
 

 int few_day = M1 * D / (M1 + M2);
 few_day = D - few_day ;
 if(few_day < 0){
  few_day = 1; 
 }

 printf("%d\n", few_day); 
}





 return 0;
}