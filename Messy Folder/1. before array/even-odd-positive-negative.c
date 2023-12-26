#include<stdio.h>
int main()
{
 int N; 
printf("Enter a number: "); 
 scanf("%d", &N);

int evenCount = 0;
int oddCount = 0;
int positiveCount = 0;
int negativeCount = 0;
int num;

for (int i = 0; i < N; i++){
printf("Enter a number: "); 
 scanf("%d", &num); 
if(num % 2 == 0) {
 evenCount++; 
}

if(num % 2 != 0) {
 oddCount++; 
}

if(num > 0) {
 positiveCount++;
}

if(num < 0) {
 negativeCount++; 
}
}
printf("Even: %d\n", evenCount); 
printf("Odd: %d\n", oddCount); 
printf("Positive: %d\n", positiveCount); 
printf("Negative: %d\n", negativeCount); 

return 0;
}