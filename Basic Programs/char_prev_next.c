#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("The previous character is %c\n", ch - 1);
    printf("The next character is %c\n", ch + 1);

    return 0;
}

