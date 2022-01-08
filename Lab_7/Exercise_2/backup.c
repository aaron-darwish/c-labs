/* This program reads information from a character stream data file */ /* (e.g. Files_ex3.c) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int account;
    char firstName[40];
    char lastName[40];
    double balance;
    FILE *fp_r, *fp_w;
    // Write
    if ((fp_w = fopen("clients.dat", "w")) == NULL)
        printf("\nFile could not be opened, exiting program.\n");
    else
    {
        printf("\nEnter the account of the customer or -1 to finish:\t");
        scanf("%d", &account);
        while (account != -1)
        {
            printf("\nEnter the first name of the customer:\t");
            scanf("%s", firstName);

            printf("\nEnter the surname of the customer:\t");
            scanf("%s", lastName);
            
            printf("\nEnter the balance of the customer:\t");
            scanf("%lf", &balance);
            // fprintf(fp_w, "%d\t%s\t%.2f\n", account, name, balance);
            fprintf(fp_w, "%d\t%s %s\t%.2f\n", account, firstName, lastName, balance);
            printf("\nEnterthe account of the customer or -1 to finish:\t");
            scanf("%d", &account);
        }
        fclose(fp_w);
    }

    // Read
    if ((fp_r = fopen("clients.dat", "r")) == NULL)
    {
        printf("\nFile could not be opened, exiting program.\n");
        exit(0);
    }
    else
    {
        printf("\n%-10s%-13s%s\n", "Account", "Name", "Balance");
        fscanf(fp_r, "%d%s %s%lf", &account, firstName, lastName, &balance);
        while (!feof(fp_r))
        {
            printf("\n%-10d%-1s %-6s%7.2f", account, firstName, lastName, balance);
            fscanf(fp_r, "%d\t%s %s\t%lf", &account, firstName, lastName, &balance);
        }
        fclose(fp_r);
    }
    return 0;
}