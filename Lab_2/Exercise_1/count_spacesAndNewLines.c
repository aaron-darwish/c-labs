#include <stdio.h>

// Determine how many are spaces, and how many are newlines
int main()
{

    char examined_character;
    int whitespaces_counter, newlines_counter;

    printf("\nThe program will count the spaces and new lines from your input stream, until an \'EOF\' is spotted.\n");

    examined_character = getchar();
    while (examined_character != EOF)
    {
        if (examined_character == ' ')
        {
            whitespaces_counter++;
        }
        else if (examined_character == '\n')
            newlines_counter++;
        examined_character = getchar();
        
        
    }

    printf("\nThe number of white spaces entered are %d, whereas the number of newlines are %d.\n", whitespaces_counter, newlines_counter);

    return 0;
}