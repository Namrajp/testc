#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(void)
{
    char m[] = "hello";
    reverse(m);
    printf("%s\n", m);
    
    // for (int i = 0; i < strlen(m); i++)
    // {
    //     printf("%c", m[i]);
    // }
    // printf("\n");

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