#define ADD(x, y) x + y
#define SUB(x, y) x - y
#define MULT(x, y) x *y
#define DIV(x, y) x / y

#include <stdio.h>

int main()
{
    int integer1, integer2;
    float results;
    char operator;

    printf("Please insert two integer values separated by a whitespace, then a binary operator to process the integers accordingly.");
    
    scanf("%d %d %c", &integer1, &integer2, &operator);
    
    switch (operator)
    {
    case '+':
        results = (float)ADD(integer1, integer2);
        break;
    case '-':
        results = (float)SUB(integer1, integer2);
        break;
    case '*':
        results = (float)MULT(integer1, integer2);
        break;
    case '/':
        results = (float)DIV(integer1, integer2);
        break;
    default:
        results = -99.69;
        break;
    }

    printf("\n%f\n", results);
    return 0;
}