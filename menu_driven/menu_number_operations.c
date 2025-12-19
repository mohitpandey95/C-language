#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        int choice, a, b, n, temp;

        printf("\nEnter two numbers: ");
        scanf("%d %d", &a, &b);

        printf("\n****** MENU ******\n");
        printf("1. Equality\n");
        printf("2. Less Than\n");
        printf("3. Quotient and Remainder\n");
        printf("4. Check Range\n");
        printf("5. Swap\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            if (a == b)
                printf("Both numbers are equal.\n");
            else
                printf("Numbers are not equal.\n");
            break;

        case 2:
            if (a > b)
                printf("%d is smaller than %d.\n", b, a);
            else if (a < b)
                printf("%d is smaller than %d.\n", a, b);
            else
                printf("Both numbers are equal.\n");
            break;

        case 3:
            if (b != 0) {
                printf("Quotient = %d\n", a / b);
                printf("Remainder = %d\n", a % b);
            } else {
                printf("Error: Division by zero not allowed.\n");
            }
            break;

        case 4:
            printf("Enter a value to check: ");
            scanf("%d", &n);
            if ((a <= n && n <= b) || (b <= n && n <= a))
                printf("%d lies between %d and %d.\n", n, a, b);
            else
                printf("%d does not lie between %d and %d.\n", n, a, b);
            break;

        case 5:
            temp = a;
            a = b;
            b = temp;
            printf("After swapping: A = %d, B = %d\n", a, b);
            break;

        case 6:
            printf("Thanks for using our program!\n");
            exit(0);

        default:
            printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
