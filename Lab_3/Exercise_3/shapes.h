void square(int size)
{
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void left_triangle(int size)
{
    int left_counter = 1;
    while (left_counter < size)
    {
        for (int i = 0; i < left_counter; i++)
        {
            printf("*");
        }
        printf("\n");
        left_counter++;
    }
}

void right_triangle(int size)
{
    int right_counter = size;
    while (right_counter > 1)
    {
        for (int j = 0; j < (size - right_counter); j++)
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
}