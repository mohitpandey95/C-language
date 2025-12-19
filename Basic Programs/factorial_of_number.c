/*
 * File: factorial_of_number.c
 * Description: Program to calculate the factorial of a given number.
 * Author: Mohit
 * Language: C
 */

#include <stdio.h>

/*
 * Function: factorial
 * -------------------
 * Calculates factorial of a number.
 *
 * n: Non-negative integer
 *
 * returns: Factorial of n
 */
int factorial(int n) {
    int f = 1;

    for (int i = 1; i <= n; i++) {
        f *= i;
    }

    return f;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", factorial(n));

    return 0;
}
