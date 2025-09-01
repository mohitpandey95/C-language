#include <stdio.h>

int main() {
    float radius, height, surfacearea, volume;

    printf("enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("enter the height of the cylinder: ");
    scanf("%f", &height);


    surfacearea = 2 * 3.14 * radius * radius + 2 * 3.14 * radius * height;
    volume = 3.14 * radius * radius * height;

    printf("surface area of the cylinder: %.2f\n", surfacearea);
    printf("volume of the cylinder: %.2f\n", volume);

    return 0;
}
