#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b;
    char op;

    while (1) {
        printf("\nEnter your operation (+, -, %, /, *): ");
        scanf(" %c", &op);

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (op) {
        case '+':
            printf("Result (Addition): %d\n", a + b);
            break;

        case '-':
            printf("Result (Subtraction): %d\n", a - b);
            break;

        case '%':
            if (b != 0)
                printf("Result (Modulo): %d\n", a % b);
            else
                printf("Error: Division by zero not allowed.\n");
            break;

        case '/':
            if (b != 0)
                printf("Result (Division): %d\n", a / b);
            else
                printf("Error: Division by zero not allowed.\n");
            break;

        case '*':
            printf("Result (Multiplication): %d\n", a * b);
            break;

        default:
            printf("Invalid operator! Please use one of (+, -, *, /, %%).\n");
        }
    }

    return 0;
}
