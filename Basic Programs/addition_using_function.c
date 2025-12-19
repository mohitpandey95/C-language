/*
 * File: addition_using_function.c
 * Description: Program to add two numbers using a function.
 * Author: Mohit
 * Language: C
 */

#include <stdio.h>

/*
 * Function: addTwoNumbers
 * ----------------------
 * Takes two integers as input and returns their sum.
 *
 * returns: Sum of two integers
 */
int addTwoNumbers() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    return a + b;
}

int main() {
    printf("Sum = %d\n", addTwoNumbers());
    return 0;
}
