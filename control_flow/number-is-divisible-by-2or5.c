#include <stdio.h>
int main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    if (a % 2 == 0 || a % 5 == 0)
        printf("The number is divisible by 2 or 5");
    else
        printf("The number is not divisible by 2 or 5");

    return 0;
}
