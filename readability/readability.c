#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    string text = get_string("Text: ");
    int i = strlen(text);
    printf( "%d \n" , i);

    /*char str[50] = "Remove The Spaces!!";*/
    char strStripped[50];

    int c = 0; /*I'm assuming you're not using C99+*/

    for(; i < strlen(text); i++)
    {
        if (isalnum(text[i]))
        {
        strStripped[c] = text[i];
        c++;
        printf("%d \n", i);
        }
    }
    strStripped[c] = '\0';
}