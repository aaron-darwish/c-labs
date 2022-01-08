#include <stdio.h>

int main()
{
    int endOfFile, value;
    char *distantCities; // Not safe

    do
    {
        endOfFile = scanf("%d %s", &value, distantCities);
        if (value >= 100)
        {
            printf("%s\n", distantCities);
        }
    } while (endOfFile != EOF);
    return 0;
}