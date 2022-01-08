#include <stdio.h>

int main()
{

#include <stdio.h>

    int left_counter = 1;

    while (left_counter < 4)
    {
        for (int i = 0; i < left_counter; i++)
        {
            printf("*");
        }
        printf("\n");
        left_counter++;
    }

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    int right_counter = 4;
    while (right_counter > 1)
    {
        for (int j = 0; j < (4 - right_counter); j++)
        {
            printf(" ");
        }
        for (int i = 0; i < right_counter; i++)
        {

            printf("*");
        }
        printf("\n");
        right_counter--;
    }
    printf("   *\n");

    return 0;
}