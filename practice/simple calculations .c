#include <stdio.h>

int main() {
    float a, b, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (operator) {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Cannot divide by zero.\n");
                return 1;
            }
            break;

        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("Result = %.2f\n", result);

    return 0;
}