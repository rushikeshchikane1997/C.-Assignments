
Copy code
#include <stdio.h>

int main() {
    // Using signed/unsigned char, int, long data types
    signed char num1_char = 10, num2_char = 5;
    int num1_int = 100, num2_int = 50;
    long num1_long = 1000, num2_long = 500;

    // Small values
    printf("Small Values:\n");
    printf("a. Sum (char): %d\n", num1_char + num2_char);
    printf("b. Difference (char): %d\n", num1_char - num2_char);
    printf("c. Product (char): %d\n\n", num1_char * num2_char);

    printf("a. Sum (int): %d\n", num1_int + num2_int);
    printf("b. Difference (int): %d\n", num1_int - num2_int);
    printf("c. Product (int): %d\n\n", num1_int * num2_int);

    printf("a. Sum (long): %ld\n", num1_long + num2_long);
    printf("b. Difference (long): %ld\n", num1_long - num2_long);
    printf("c. Product (long): %ld\n\n", num1_long * num2_long);

    // Large values
    signed char num1_char_large = 127, num2_char_large = 100;
    int num1_int_large = 2147483647, num2_int_large = 1000000000;
    long num1_long_large = 9223372036854775807, num2_long_large = 1000000000000000000;

    printf("Large Values:\n");
    printf("a. Sum (char): %d\n", num1_char_large + num2_char_large);
    printf("b. Difference (char): %d\n", num1_char_large - num2_char_large);
    printf("c. Product (char): %d\n\n", num1_char_large * num2_char_large);

    printf("a. Sum (int): %d\n", num1_int_large + num2_int_large);
    printf("b. Difference (int): %d\n", num1_int_large - num2_int_large);
    printf("c. Product (int): %d\n\n", num1_int_large * num2_int_large);

    printf("a. Sum (long): %ld\n", num1_long_large + num2_long_large);
    printf("b. Difference (long): %ld\n", num1_long_large - num2_long_large);
    printf("c. Product (long): %ld\n\n", num1_long_large * num2_long_large);

    return 0;
}
