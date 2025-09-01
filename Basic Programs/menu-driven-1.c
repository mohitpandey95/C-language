#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, A, B, C;

    while (1) {
        printf("Enter your first number: ");
        scanf("%d", &A);
        printf("Enter your second number: ");
        scanf("%d", &B);

        printf("\n======= MENU =======\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Equality\n");
        printf("4. Less than\n");
        printf("5. Quotient\n");
        printf("6. Remainder\n");
        printf("7. Exit\n");
        printf("====================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                C = A + B;
                printf("%d + %d = %d\n", A, B, C);
                break;
            case 2:
                C = A - B;
                printf("%d - %d = %d\n", A, B, C);
                break;
            case 3:
                if (A == B)
                    printf("%d and %d are Equal\n", A, B);
                else
                    printf("%d and %d are Not Equal\n", A, B);
                break;
            case 4:
                if (A < B)
                    printf("%d is Less than %d\n", A, B);
                else
                    printf("%d is Not Less than %d\n", A, B);
                break;
            case 5:
                if (B == 0) {
                    printf("Division by zero not allowed!\n");
                } else {
                    C = A / B;
                    printf("%d / %d = %d\n", A, B, C);
                }
                break;
            case 6:
                if (B == 0) {
                    printf("Division by zero not allowed!\n");
                } else {
                    C = A % B;
                    printf("%d %% %d = %d\n", A, B, C);
                }
                break;
            case 7:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
