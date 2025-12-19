#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float length, breadth, height, base, area;

    while (1) {
        printf("\n****** MENU ******\n");
        printf("1. Area of Square\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter the side length of the square: ");
            scanf("%f", &length);
            area = length * length;
            printf("Area of square = %.2f\n", area);
            break;

        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of triangle = %.2f\n", area);
            break;

        case 4:
            printf("Thanks for using our program!\n");
            exit(0);

        default:
            printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}
