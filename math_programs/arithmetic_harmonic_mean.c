#include <stdio.h>

int main() {
    float a, b, am, hm;
    printf("enter first number: ");
    scanf("%f",&a);

    printf("enter second number: ");
    scanf("%f",&b);

    am = (a + b)/2;
    hm = (a * b)/(a + b);

    printf("Arithmetic Mean (AM): %.2f\n", am);
    printf("Harmonic Mean (HM): %.2f\n", hm);

    return 0;
}

