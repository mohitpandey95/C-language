/*
 * File: prime_numbers_in_range.c
 * Description: Prints whether each number in a given range is prime or not.
 * Author: Mohit
 * Language: C
 */

#include <stdio.h>

/*
 * Function: isPrime
 * -----------------
 * Checks if a number is prime.
 *
 * n: Number to be checked
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

    printf("Enter the range limit: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (isPrime(i))
            printf("%d is a Prime number\n", i);
        else
            printf("%d is Not a Prime number\n", i);
    }

    return 0;
}
