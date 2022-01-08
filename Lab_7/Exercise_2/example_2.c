#include <stdio.h>
#include <string.h>
int main()
{
    int account;
    char name[40];
    double balance;
    FILE *fptr;
    if ((fptr = fopen("clients.dat", "w")) == NULL)
        printf("\nFile could not be opened, exiting program.\n");
    else
    {
        printf("\nEnter the account of the customer or -1 to finish:");
        scanf("%d", &account);
        while (account != -1)
        {
            printf("\nEnter the name of the customer:");
            while (getchar() != '\n') // If a new line is entered, retry.
                continue;
            fgets(name, 40, stdin);
            printf("\nEnter the balance of the customer:");
            scanf("%lf", &balance);
            fprintf(fptr, "%d\t%s\t%.2f\n", account, name, balance);
            printf("\nEnterthe account of the customer or -1 to finish:");
            scanf("%d", &account);
        }
        fclose(fptr);
    }
    return 0;
}