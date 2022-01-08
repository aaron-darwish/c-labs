#include <stdio.h>

int main()
{
    int userInput, base = 0, numberBase[2] = {0, 0};
    printf("Input an integer value less than a hundred.\n");
    // Make sure to only read the first two digits. And ignore the rest because the maximum value needed must be between 0 and 99, inclusive. Less than a 100.
    scanf("%2d", &userInput);

    void fromIntegerToWord(int *numberBase);
    while (userInput != 0)
    {
        int digit = userInput % 10;
        userInput = userInput / 10;
        numberBase[base] = digit;
        base++;
    }
    fromIntegerToWord(numberBase);
    printf("\v");

    return 0;
}

void fromIntegerToWord(int *numberBase)
{
    switch (numberBase[1])
    {
    case 0:
        if (numberBase[0] == 0 && numberBase[1] != 1)
            printf("Zero");
        break;
    case 1:
        if (numberBase[0] == 0)
            printf("Ten");
        break;
    case 2:
        printf("Twenty ");
        break;
    case 3:
        printf("Thirty ");
        break;
    case 4:
        printf("Forty ");
        break;
    case 5:
        printf("Fifty ");
        break;
    case 6:
        printf("Sixty ");
        break;
    case 7:
        printf("Seventy ");
        break;
    case 8:
        printf("Eighty ");
        break;
    case 9:
        printf("Ninety ");
        break;
    }

    switch (numberBase[0])
    {
    case 1:
        if (numberBase[1] != 1)
            printf("one");
        else
            printf("Eleven");
        break;
    case 2:
        if (numberBase[1] != 1)
            printf("two");
        else
            printf("Twelve");
        break;
    case 3:
        if (numberBase[1] != 1)
            printf("three");
        else
            printf("Thirteen");
        break;
    case 4:
        if (numberBase[1] != 1)
            printf("four");
        else
            printf("Fourteen");
        break;
    case 5:
        if (numberBase[1] != 1)
            printf("five");
        else
            printf("Fifteen");
        break;
    case 6:
        if (numberBase[1] != 1)
            printf("six");
        else
            printf("Sixteen");
        break;
    case 7:
        if (numberBase[1] != 1)
            printf("seven");
        else
            printf("Seventeen");
        break;
    case 8:
        if (numberBase[1] != 1)
            printf("eight");
        else
            printf("Eighteen");
        break;
    case 9:
        if (numberBase[1] != 1)
            printf("nine");
        else
            printf("Nineteen");
        break;
    }
}