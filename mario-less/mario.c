#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int y, x, row, space;
    //Takes info from user
    do
    {
        printf("How many rows between 1 and 8: \n");
        scanf("%d", &row);
    }
    //If user inputs anything less than 1 or more than 8, it will return true and loop back
    while(row < 1 || row > 8);
    //this prints the number of rows
    for(y = 1; y <= row; ++y)
    {
        //this prints the spaces
        for(space = 0; space < row - y; space++)
        {

            printf(" ");

        }
        //this prints the hashtag
        for(x = 1; x <= y; ++x)
        {

            printf("#");

        }

        printf("\n");

    }

}