#include <stdio.h>

void swap(int *a, int *b);

int main(void) 
{
    int x = 1;
    int y = 2;
    printf("value of x: %i and value of y: %i\n", x, y);
    swap(&x, &y);
    printf("value of x: %i and value of y: %i\n", x, y);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}