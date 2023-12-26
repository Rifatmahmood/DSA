#include<stdio.h>
int main()
{
 long long int e, m, b; 
 // printf("Enter a number: ");
 scanf("%lld %lld %lld", &e, &m, &b);

// when eyes or body is missing, prodcue nothing 
if(e != 0 && b != 0) {
// 2. when m is missing, you should use 2 eyes 
 if( m == 0)
 {
  int eDivided = e / 2;
   if ( eDivided < b)
   {
    printf("%d", eDivided);
   }
  else
  {
   printf("%lld", b); 
  }

}
 // 3. when m is less then eyes and body
if (m != 0 && m < e && m < b) {
  int eRemained = (e - m) / 2; 
  int bRemained = b - m;
  if ( eRemained < bRemained) {
   printf("%lld", eRemained + m); 
  } else {
   printf("%lld", bRemained + m); 
  }
}
} else if ( m ){

}

// 1. when E or B is missing, produce nothing 
else {
 printf("%d", 0);
} 
 return 0;
}