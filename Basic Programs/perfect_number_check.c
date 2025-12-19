/*
 * File: perfect_number_check.c
 * Description: Program to check whether a given number is a Perfect Number.
 * Author: Mohit
 * Language: C
 */

#include <stdio.h>

/*
 * Function: isPerfect
 * --------------------
 * Checks if a number is a perfect number.
 *
 * n: Integer number to be checked
 *
 * returns: 1 if perfect, 0 otherwise
 */
int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPerfect(n))
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is Not a Perfect Number.\n", n);

    return 0;
}
