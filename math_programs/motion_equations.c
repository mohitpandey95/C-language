#include <stdio.h>

int main() {
    float u, a, t, v, s;
    printf("Please Enter initial velocity: ");
    scanf("%f", &u);
    printf("Please Enter acceleration: ");
    scanf("%f", &a);
    printf("Please Enter time: ");
    scanf("%f", &t);

    v = u + a * t;
    s = u + a * t * t;

    printf("Final velocity is %.2f\n", v);
    printf("Distance traveled is %.2f\n", s);

    return 0;
}

