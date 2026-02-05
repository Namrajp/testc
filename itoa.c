#include <stdio.h>
#include <string.h>

void itoa(int, char []);
void reverse(char s[]);

int main(void)
{
    int s = -345;
    char t[5];
    itoa(s, t);
    
    printf("%s\n", t);

    // for (int i = 0; i < strlen(t); i++)
    // {
    //     printf("%c", t[i]);
    // }
    // printf("\n");
}

void itoa(int n, char c[])
{
    int i, sign;
    if((sign = n)< 0) // record sign
        n = -n; // make n positive
    i = 0;

    do { // generate digits in reverse order
        c[i++] = n % 10 + '0';  // get next digit
    } while ((n /= 10) > 0);  // delete it

    if (sign < 0)
        c[i++] = '-';
    c[i] = '\0';  

    reverse(c);
    // n = n * 10 + s[i] - '0'; // atoi example math for comparison.
}

void reverse(char s[])
{
    int i, j, c;
    for(i = 0, j = strlen(s) -1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}