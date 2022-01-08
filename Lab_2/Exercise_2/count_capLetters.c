#include <stdio.h>

int main()
{
    char examined_character;
    char cap_letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int caps_counter = 0, iterator = 0;

    examined_character = getchar();
    while (examined_character != EOF)
    {
        for (iterator = 0; iterator < 26; iterator++)
        {
            if (cap_letters[iterator] == examined_character)
            {
                caps_counter++;
                break; // For performance reasons, it quits the for loop and goes back to the while loop.
            }
        }
        examined_character = getchar();
    }

    printf("\nThe total amount of capital letters entered is %d.\n", caps_counter);

    return 0;
}