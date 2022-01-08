#include <stdio.h>

int main()
{
    int counter = 1;

    while (counter < 10)
    {
        for (int i = 0; i < counter; i++)
        {
            printf("*");
        }
        printf("\n");
        counter++;
    }
    return 0;
}