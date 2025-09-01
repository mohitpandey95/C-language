#include <stdio.h>

int main() {
    float fahrenheit, celsius, kelvin;
    printf("enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);


    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    kelvin = celsius + 273.15;

    printf("temperature in Celsius: %.2fC\n", celsius);
    printf("temperature in Kelvin: %.2fK\n", kelvin);

    return 0;
}
