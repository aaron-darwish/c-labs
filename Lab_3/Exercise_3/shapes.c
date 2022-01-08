#include <stdio.h>
#include "shapes.h"

void square(int size);
void left_triangle(int size);
void right_triangle(int size);

int main()
{
    left_triangle(4);
    square(4);
    right_triangle(4);

    return 0;
}