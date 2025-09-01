#include <stdio.h>

int main() {
    float iradius, oradius, perimeter, area;
    float pi = 3.14;

    printf("Enter inner radius of the ring: ");
    scanf("%f", &iradius);

    printf("Enter outer radius of the ring: ");
    scanf("%f", &oradius);

    perimeter = 2 * pi * (iradius + oradius);
    area = pi * (oradius * oradius - iradius * iradius);

    printf("Perimeter of the ring: %.2f\n", perimeter);
    printf("Area of the ring: %.2f\n", area);

    return 0;
}
