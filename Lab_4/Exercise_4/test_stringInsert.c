#include <stdio.h>
#include <string.h>

void stringInsert(char str[], char c, int position)
{
    char str_cp[30];
    int threshold = strlen(str);
    for (int i = (position - 1); i < threshold; i++)
    {
        str_cp[i + 1] = str[i];
    }

    str_cp[position - 1] = c;

    for (int z = 0; z < position - 1; z++) {
        str_cp[z] = str[z];
    }

    for (int j = 0; j < (threshold + 1); j++) {
        str[j] = str_cp[j];
    }
}

int main()
{
    int position;
    char str[30], c;

    printf("Enter the word, then the character and finally where you'd like the character to be inserted. All separated by a space.\n");
    scanf("%s %c %d", str, &c, &position);

    stringInsert(str, c, position);

    printf("The new word is: %s\n", str);

    return 0;
}
