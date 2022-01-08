#define MAX_VALUE 10

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int random_value = rand() % MAX_VALUE, user_guess; // Assigns random integers between 0 and 9 inclusively.
    printf("Please guess what the number the computer has \"thought\" up. (Should be between 0-9, inclusive.\n");

    scanf("%d", &user_guess);

    if (user_guess == random_value)
        printf("Well done!");
    else
        printf("Wrong guess; better luck next time!");
    return 0;
}