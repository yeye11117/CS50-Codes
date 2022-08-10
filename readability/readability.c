#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");

    float letters = 0;
    float words = 1;
    float sentence = 0;

    for(int i = 0; i < strlen(text); i++)
    {
        /* Counts letters, words and sentences*/
        if (isalnum(text[i]))
        {
            letters++;
        }

        else if (text[i] == ' ')
        {
            words++;
        }

        else if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence++;
        }

    }

    /*index = 0.0588 * L - 0.296 * S - 15.8*/
    /*where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.*/

    float l = (letters/words)*100;
    float s = (sentence/words)*100;
    /*We convert the float into an int, otherwise it will print out a float number for the index which throws it off*/
    int index = round((0.0588 * l) - (0.296 * s) - 15.8);

    if(index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        /*Here is the reasn why we convert float to int.*/
        printf("Grade %i\n", index);
    }
}