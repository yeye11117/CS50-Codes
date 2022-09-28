#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");

    // check that the input_file is valid.

    if (input_file == NULL)
    {
        printf("Could not open file");
        return 2;
    }

    //store bocks
    unsigned char buffer[512];

    //track number of images
    int count_image = 0;

    //file pointer for recovered images
    FILE *output_file = NULL;

    //char filename
    char *filename = malloc(8 * sizeof(char));

    fread (buffer, sizeof(char), 512)
}