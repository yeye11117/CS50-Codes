#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0; /*I'm assuming you're not using C99+*/

    for(int i = 0; i < strlen(text); i++)
    {
        if (isalnum(text[i]))
        {
            letters++;
        }
    }
    printf("%d letters \n", letters);
}