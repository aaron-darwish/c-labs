#include <stdio.h>

int main()
{
    // You need a session for the miles value, cities names and a separate session to write to another text file.
    FILE *fp_values, *fp_write;
    fp_values = fopen("cities.txt", "r");
    fp_write = fopen("distantCities.txt", "w");

    int endOfFile, value;
    char *distantCities;

    do
    {
        endOfFile = fscanf(fp_values, "%d %s", &value, distantCities);
        if (value >= 100)
        {
            fprintf(fp_write, "%s\n", distantCities);
        }
    } while (endOfFile != EOF);
    return 0;
}