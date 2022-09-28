#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    FILE *input_file = fopen(argv[1], r);

    // check that the input_file is valid.

    if (input_file == NULL)
    {
        printf("Could not open file");
        return 2;
    }
    
}