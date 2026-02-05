#include <stdio.h>
#include <ctype.h>

int atoi(char c[]);

int main() 
{   
    printf("%d\n", atoi("-321"));
    return 0;
}

int atoi(char s[])
{
    int n, i, sign;
    for (i = 0; isspace(s[i]);++i)// skip white space
    ;
    sign = (s[i] == '-') ? -1: 1;
    if (s[i] == '+' || s[i] == '-') // skip sign
    i++;
    for (n = 0; isdigit(s[i]);i++)
        n = n * 10 + s[i] - '0' ;
        return sign * n;
}