#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int blockHeight, blockWidth, printer;

    printf("Enter a height number between 1 and 8: \n");
    scanf ("%d", &blockHeight);

    for(printer = 1; printer <= blockHeight; ++printer)
    {
        for(printer = 1; blockHeight <= blockWidth; ++blockWidth)

        printf("# \n");

    }
    printf("Your number is: %d \n", blockHeight);

}