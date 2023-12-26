#include<stdio.h>
int main()
{
 int t; 
 scanf("%d", &t);
 for (int i = 0; i < t; i++)
 {
  int countT = 0;
  int countP = 0; 
  int n;
   scanf("%d", &n);
  char s[n];
  scanf("%s", s); 
  for (int i = 0; i < n; i++)
  {
      if(s[i] == 'T'){
       countT++; 
      } else if(s[i] == 'P') {
       countP++; 
      }
  }

if(countT > countP){
  printf("Tiger\n"); 
}else if(countT < countP) {
  printf("Pathaan\n"); 
} else {
  printf("Draw\n"); 
}
 }

 return 0;
}