#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    
    string sent = get_string("Text: ");
    int number = count_letters(sent);
    printf("%d", text);

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
