#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string sent = get_string("Text: ");
    printf("%s \n", sent);
}