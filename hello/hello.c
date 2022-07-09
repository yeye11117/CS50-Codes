#include <stdio.h>

int main(void) {

    char firstName[30];

    printf("Please write your name: \n");

    scanf("%s", firstName);

    printf("Hello %s. \n", firstName);

}