#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* getstring(void);

int main(void) 
{

    printf("What is your name? \n");
    char* t = getstring();
    if (t != NULL) 
    {
        printf("Your name is: %s \n.", t);
        free(t);
    }
    return 1;
}

char* getstring(void)
{
    int c, length, capacity;
    length = 0; 
    capacity = 16;
    char* s;
    s = malloc(40 * sizeof(char));
    
    if (s == NULL) 
    {
        return NULL;
    }

    while ((c = getchar()) != '\n' && c != EOF)
    {
        if (length+1 >= capacity)
        {
            capacity *= 2;
            char* new_buff;
            new_buff = realloc(s, 16 * sizeof(char));
            if (new_buff == NULL) {
                free(s);
                return NULL;
            }
            s = new_buff;
        }
        s[length++] = c;
    }

    s[length] = '\0';
    return s;
  
}