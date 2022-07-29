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
}


/*int count_letters(string text)
{
    int count = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] != ' ')
        {
        count++;
        }
    }
    return count;
}*/
