#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int y, x, row, space;

    do
    {
        printf("Enter a height number between 1 and 8: \n");
        scanf ("%d", &row);
    }

    while(row < 1 || row > 8);

    for(y = 1; y <= row; ++y)
    {

        for(x = 1; x <= y; ++x)
        {

            printf("#");

        }

        printf(" \n");

    }

}