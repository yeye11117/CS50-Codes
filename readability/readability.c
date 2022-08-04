#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    string text = get_string("Text: ");

    float letters = 0;
    float words = 1;
    float sentence = 0;

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

        else if(text[i] == '.' || text[i] == '!' || text[i] == '?'  )
        {
            sentence++;
        }

    }
    printf("%f letters \n", letters);
    printf("%f words \n", words);
    printf("%f sentence \n", sentence);

    /*index = 0.0588 * L - 0.296 * S - 15.8
    where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.*/

    float l = (letters/words)*100;
    printf("%f \n", l);
    float s = (sentence/words)*100;
    printf("%f \n", s);
    


}