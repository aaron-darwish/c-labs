#include <stdio.h>

int main()
{
    int counter = 1;
    while (counter < 10)
    {
        for (int j = 0; j < (14 - counter); j++)
        {
            printf(" ");
        }
        for (int i = 0; i < counter; i++)
        {

            printf("*");
        }
        printf("\n");
        counter++;
    }
    return 0;
}
