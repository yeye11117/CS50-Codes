#include <stdio.h>
#include <cs50.h>

int main(void) {

    string firstName = get_string("What is your name ? \n");

    printf("Hello %s. \n", firstName);

}