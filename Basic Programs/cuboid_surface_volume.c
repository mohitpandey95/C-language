#include <stdio.h>

int main() {
    float l, b, h, surfacearea, volume;
    printf("Enter length: ");
    scanf("%f", &l);
    printf("Enter breadth: ");
    scanf("%f", &b);
    printf("Enter height: ");
    scanf("%f", &h);

    surfacearea = 2 * (l*b + l*h + b*h);
    volume = l * b * h;

    printf("Surface Area of cuboid: %.2f\n", surfacearea);
    printf("Volume of cuboid: %.2f\n", volume);

    return 0;
}

