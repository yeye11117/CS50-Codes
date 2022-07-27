#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int count = 0;
    string sent = get_string("Text: ");
    printf("%d", count);

}

int count_letters(string text)
{
    int count = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] != ' ')
        count++;
    }
    return count;

}