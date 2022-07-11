#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int y, x, row, space;

    do
    {
        printf("How many rows between 1 and 8: \n");
        scanf ("%d", &row);
    }

    while(row < 1 || row > 8);

        for(y = 1; y <= row; ++y)
        {

            for(space = 0; space < row - y - 1; space++)
            {

                printf(" ");

            }

            for(x = 1; x <= y; ++x)
            {

                printf("#");

            }

            printf(" \n");

        }

}