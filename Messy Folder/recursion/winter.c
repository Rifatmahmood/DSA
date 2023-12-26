#include <stdio.h>

int main() {
 int x, p;
 scanf("%d %d", &x, &p); 
 // Original Price = Price After Discount / (1 - (Discount Percentage / 100)) == 80 / (1 - (20 / 100))
 float original_price = p / (1 - ((float)x / 100));
 printf("%.2f", original_price); 

 return 0;
}
