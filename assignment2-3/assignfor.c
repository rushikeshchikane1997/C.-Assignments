//Write a program to accept integer values of base and index and calculate power of base to
//index.

#include <stdio.h>

int main() {
    int base, index;
    long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter index: ");
    scanf("%d", &index);

    for (int i = 1; i <= index; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is %ld\n", base, index, result);

    return 0;
}























































