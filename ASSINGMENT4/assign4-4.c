#include<stdio.h>


int power(int base, int exponent);

int main()
{
    int base, exponent, result;

    printf("Enter the base and exponent: ");
    scanf("%d %d", &base, &exponent);

    result = power(base, exponent);
    printf("pow = %d\n", result);

    return 0;
}

// Function definition for pow
int power(int base, int exponent)
{
    int result = 1; // Initialize result to 1

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}










































