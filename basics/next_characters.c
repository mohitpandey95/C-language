/*
 * File: next_characters.c
 * Description: Prints the next n characters starting from a given character.
 * Author: Mohit
 * Language: C
 */

#include <stdio.h>

/*
 * Function: printNextCharacters
 * -----------------------------
 * Prints the next 'n' characters after the given character.
 *
 * ch: Starting character
 * n : Number of next characters to print
 */
void printNextCharacters(char ch, int n) {
    for (int i = 1; i <= n; i++) {
        printf("%c", ++ch);
    }
    printf("\n");
}

int main() {
    int n;
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);   // space avoids newline issue

    printf("Enter n: ");
    scanf("%d", &n);

    printNextCharacters(ch, n);

    return 0;
}
