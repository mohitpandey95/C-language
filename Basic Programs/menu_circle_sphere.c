#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float radius, area, circumference, volume;
    const float pi = 3.14159;

    while (1) {
        printf("\nEnter the radius: ");
        scanf("%f", &radius);

        printf("\n****** MENU ******\n");
        printf("1. Area of Circle\n");
        printf("2. Circumference of Circle\n");
        printf("3. Volume of Sphere\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            area = pi * radius * radius;
            printf("Area of circle = %.2f\n", area);
            break;

        case 2:
            circumference = 2 * pi * radius;
            printf("Circumference of circle = %.2f\n", circumference);
            break;

        case 3:
            volume = (4.0 / 3.0) * pi * radius * radius * radius;
            printf("Volume of sphere = %.2f\n", volume);
            break;

        case 4:
            printf("Thanks for using the program!\n");
            exit(0);

        default:
            printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}
