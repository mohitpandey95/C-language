#include <stdio.h>

int main() {
    float temperatureF, temperatureC;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temperatureF);

    temperatureC = (temperatureF - 32.0) * 5.0 / 9.0;

    printf("Temperature in Celsius: %.2f\n", temperatureC);

    return 0;
}
