#include <stdio.h>

int main()
{
    int numbers_entered[10];

    printf("\nPlease enter 10 numbers:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers_entered[i]);
    }

    // Positive numbers
    for (int k = 0; k < 10; k++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (numbers_entered[j] == (10 - k))
                printf("  *  ");
            else
                printf("     ");
        }

        printf("\n");
    }

    // Negative numbers
    for (int k = 0; k < 10; k++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (numbers_entered[j] == (-1 - k))
                printf("  *  ");
            else
                printf("     ");
        }

        printf("\n");
    }

    return 0;
}