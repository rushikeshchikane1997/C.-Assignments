#include <stdio.h>

float calculate(float operand1, float operand2, char operator) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else {
                printf("Error: Division by zero");
                return 0;
            }
        default:
            printf("Error: Invalid operator");
            return 0;
    }
}

int main() {
    float operand1, operand2;
    char operator;

   
    printf("Enter first operand: ");
    scanf("%f", &operand1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second operand: ");
    scanf("%f", &operand2);

 


    printf("Result: %.2f %c %.2f = %.2f\n", operand1, operator, operand2,calculate(operand1, operand2, operator));

    return 0;
}



































