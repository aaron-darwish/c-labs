#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // Change the input stream to malloc/calloc and free it and the end.
    char keyboard_input_stream[200], *str_token;
    int i = 0, j = 1;
    printf("\nEnter the words, separated by a comma. Whence finished, trigger EOF through CTRL + D.\n");
    while (scanf(" %c", &keyboard_input_stream[i]) != EOF)
    {
        i++;
    }

    // Get the first token.
    str_token = strtok(keyboard_input_stream, " ,\n\t");

    do
    {
        printf("Word number %d is:\t%s\n", j, str_token);
        str_token = strtok(NULL, " ,\n\t");
        j++;
    } while (str_token != NULL);

    return 0;
}