#include <stdio.h>

void stringDelete(char *str_original, char *str_modified, int shift_position)
{
    for (int i = --shift_position; i < sizeof(str_original); i++)
    {
        str_modified[i - 1] = str_original[i];
    }

    for (int j = 0; j < shift_position; j++)
    {
        str_modified[j] = str_original[j];
    }
}

int main()
{
    int shift_position;
    char str_original[30], str_modified[30];

    printf("Type in the word and press Enter:   ");
    scanf("%s", str_original);

    printf("Type in the position of the character to be deleted:   ");
    scanf("%d", &shift_position);

    stringDelete(str_original, str_modified, shift_position);
    printf("Original word = %s\nModified word = %s\n", str_original, str_modified);

    return 0;
}