#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Calculating factorial: ");
        for (int i = 1; i <= num; i++) {
            factorial *= i;
            printf("%d", i);
            if (i < num) {
                printf(" x ");
            }
        }
        printf(" = %llu\n", factorial);
    }

    return 0;
}
