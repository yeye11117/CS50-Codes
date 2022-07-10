#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int blockHeight, printer;

    printf("Enter a height number between 1 and 8: \n");
    scanf ("%d", &blockHeight);

    for(printer = 1, printer <= blockHeight; ++printer);
    {

        printf("kekekekek");

    }
    printf("Your number is: %d \n", blockHeight);

}