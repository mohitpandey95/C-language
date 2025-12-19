#include <stdio.h>
#include <stdlib.h>

int main(){

int uchoice;
float length, breadth, side, radius, base, height, area;
    printf("=====================================\n");
    printf("   AREA CALCULATOR - SHAPE SELECTOR  \n");
    printf("=====================================\n");
    printf("Choose an option from the list below:\n");
    printf("  1) Calculate Area of Rectangle\n");
    printf("  2) Calculate Area of Square\n");
    printf("  3) Calculate Area of Circle\n");
    printf("  4) Calculate Area of Triangle\n");
    printf("  5) Exit Program\n");
    printf("=====================================\n");
    printf("\nEnter your choice: ");
    scanf("%d", &uchoice);

     switch(uchoice) {
        case 1:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;
        case 2:
            printf("Enter side of square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;
        case 3:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;
        case 4:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;
        case 5:
            printf("Thank you for using the Area Calculator. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice! Please run the program again.\n");
    }



return 0;
}
