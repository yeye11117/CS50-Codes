#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int y, x, row;

    printf("Enter a height number between 1 and 8: \n");
    scanf ("%d", &row);

    for(y = 1; y <= row; ++y)
    {

        /*for(x = 1; x <= y; ++x)
        {

        }*/
        printf("# \n");
    }
    printf("%d", row);
}