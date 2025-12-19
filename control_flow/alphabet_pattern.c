/*
 * File: alphabet_pattern.c
 * Description: Prints an alphabet pattern using nested loops.
 * Author: Mohit
 * Language: C
 */

#include <stdio.h>

/*
 * Function: printAlphabetPattern
 * ------------------------------
 * Prints a pattern of increasing alphabets.
 *
 * Output:
 * A
 * BC
 * DEF
 */
void printAlphabetPattern() {
    char ch = 'A';

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}

int main() {
    printAlphabetPattern();
    return 0;
}
