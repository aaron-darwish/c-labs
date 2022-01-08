#include <stdio.h>

int main()
{
    char word[5];

    printf("\nEnter a five characters long word, to check if it's a palindrome or not. Any extra characters will be ignored.\n");

    for(int i = 0; i < 5; i++) {
        word[i] = getchar();
    }

    if (word[0] == word[4]) {
        if (word[1] == word[3]) {
            printf("This word is a palindrome.\n");
        } else {
            printf("This word is not a palindrome.\n");
        }
    } else {
        printf("This word is not a palindrome.\n");
    }
}