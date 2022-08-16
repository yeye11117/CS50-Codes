#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //This part of the code ensures that there only two arguments on the terminal "./Caesar + key"
    if (argc != 2)
    {

        printf("Usage: ./caesar key");
        return 1;

    }
    //This ensures that the argument is in fact a digit by comparing it to a numerical value that loops around to match the argument.
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {

            printf("Usage: ./caesar key");
            return 1;

        }
    }
        //We need to turn our argument from a string to an int so we can later do math with it
        int k = atoi(argv[1]);
        //We take the string from the user
        string plaintext = get_string("Message:");
        printf("Ciphertext: ");

        for (int j = 0; j < strlen(plaintext); j++)
        {

            if(isupper(plaintext[j]))
            {
                // %C prints character individually, character ascii value - 65 to bring it to 0 + cipher x mod26 loops the alphabet + 65 to bring it into ascii value
                printf("%c", (plaintext[j] - 65 + k) % 26 + 65);

            }

            else if(islower(plaintext[j]))
            {

                printf("%c", (plaintext[j] - 97 + k) % 26 + 97);

            }

            else
            {

                printf("%c", plaintext[j]);

            }

        }

        printf("\n");

}