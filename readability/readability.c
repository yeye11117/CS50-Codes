#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    string text = get_string("Text: ");
    int count_letters(string text);
    
    printf("%s", text);

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
} */
