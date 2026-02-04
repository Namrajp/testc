#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    // scanf("%i", &x);
    scanf("%i", x); // seg fault

    printf("x: %i\n", x);
}