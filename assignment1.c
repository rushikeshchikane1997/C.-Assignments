#include<stdio.h>

int main()
{
    int num1, num2, sum, sub, mul ;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

// Add the numbers
    sum = num1 + num2;
// substract the number
   sub = num1 - num2;
// multiplication of the number
   mul = num1*num2;
    // Display the result
    printf("Sum: %d\n", sum);
    printf("sub: %d\n", sub);
    printf("mul: %d\n", mul);
    return 0;
}



