#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, A, B;

    while (1) {
        printf("Enter first number: ");
        scanf("%d", &A);
        printf("Enter second number: ");
        scanf("%d", &B);

        printf("\n======= MENU =======\n");
        printf("1. Find Maximum\n");
        printf("2. Find Minimum\n");
        printf("3. Even or Odd (for both numbers)\n");
        printf("4. Positive or Negative (for both numbers)\n");
        printf("5. Exit\n");
        printf("====================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (A > B)
                    printf("Maximum is %d\n", A);
                else
                    printf("Maximum is %d\n", B);
                break;

            case 2:
                if (A < B)
                    printf("Minimum is %d\n", A);
                else
                    printf("Minimum is %d\n", B);
                break;

            case 3:
                if (A % 2 == 0)
                    printf("%d is Even\n", A);
                else
                    printf("%d is Odd\n", A);

                if (B % 2 == 0)
                    printf("%d is Even\n", B);
                else
                    printf("%d is Odd\n", B);
                break;

            case 4:
                if (A >= 0)
                    printf("%d is Positive\n", A);
                else
                    printf("%d is Negative\n", A);

                if (B >= 0)
                    printf("%d is Positive\n", B);
                else
                    printf("%d is Negative\n", B);
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

