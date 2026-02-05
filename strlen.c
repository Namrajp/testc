#include <stdio.h>
int new_strlen(char* s);

int main(void) 
{
    int length = new_strlen("HelloWorld");
    printf("The length of string is %i \n:", length);
}

int new_strlen(char* s) 
{
    int i;
    i = 0;

    while(s[i] != '\0')
    {
        ++i;
    }
    return  i;
}