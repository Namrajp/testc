#include <stdio.h>
int atoi(char c[]);

int main() 
{   
    printf("%d\n", atoi("321"));
    return 0;
}

int atoi(char s[])
{
    int n, i;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9';++i)
    {
        n = n * 10 + s[i] - '0' ;
    }
        return n;
}