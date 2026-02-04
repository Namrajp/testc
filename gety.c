#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // char x[5];
    char *s = NULL; // bus error or seg fault// no space allocated //s = malloc(5);
    // s = malloc(5); // memory allocate
    printf("s: ");
    scanf("%s", s);

    printf("s: %s\n", s);
}