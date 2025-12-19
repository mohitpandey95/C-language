/*
 * File: prime_number_check.c
 * Description: Program to check whether a given number is prime or not.
 * Author: Mohit
 * Language: C
 */

#include <stdio.h>

/*
 * Function: isPrime
 * -------------------
 * Checks if a number is prime.
 *
 * n: Integer number to be checked
 *
 * returns: 1 if prime, 0 otherwise
 */
int isPrime(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is Not a Prime number.\n", n);

    return 0;
}
