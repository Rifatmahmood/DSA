#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int threeNumbers = a * b * c;
        if ( m % threeNumbers != 0) {
            printf("%d\n", -1);
        } else {
            long long int missingNumber = m / threeNumbers;
            printf("%lld\n", missingNumber);
        }
    }

    return 0;
}
