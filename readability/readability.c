#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentence = 0;

    for(int i = 0; i < strlen(text); i++)
    {
        if (isalnum(text[i]))
        {
            letters++;
        }

        else if( text[i] == ' ')
        {
            words++;
        }
        
    }
    printf("%d letters \n", letters);
    printf("%d words \n", words);
}