#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct match
{
    char OP_name[10];
    int QM_score, OP_score, home; // Queen Mary's and the opponents score (OP). If home is 1, then the match occured at home. If it's 0, then it happened away.
} Match;

int main()
{
    Match matches[10]; // There are a total of 10 matches in qmulResults.txt
    char input_str[200];
    char *str_token;
    int k = 0, home_wins = 0, home_losses = 0, home_draws = 0, away_wins = 0, away_losses = 0, away_draws = 0, GF = 0, GA = 0;

    // Redirects all the characters from qmulResults.txt into input_str characters array. Through the CMD/Terminal: ./Program < qmulResults.txt
    while (scanf("%c", &input_str[k]) != EOF)
    {
        k++;
    }

    str_token = strtok(input_str, " "); // Get the first token

    // Extract tokens to find the scores. Then register them in the appropriate sub-structure.
    for (int i = 0; i < 10; i++)
    {
        for (int z = 0; z < 2; z++)
        {
            if (strcmp(str_token, "QMUL") == 0) // Check if it's QMUL's team
            {
                str_token = strtok(NULL, " "); // If it is, take the next token (score, an integer)
                matches[i].QM_score = atoi(str_token);
                matches[i].home = 0; // If the token "QMUL" is found first, then the home should be 1. However, since this is inside another loop (z), the value will swap back to 0. Hence, reverse the 1 to 0.
            }
            else
            {
                str_token = strtok(NULL, " "); // If not QMUL, it must be the opponent. Take the integer and populate it in OP_score.
                matches[i].OP_score = atoi(str_token);
                matches[i].home = 1;
            }
            str_token = strtok(NULL, " "); // Leave the integer, and proceed to the next keyword token.
        }
        getchar(); // Remove the newline after the two teams and their scores are recorded, else a segementation fault will occur.
    }

    // Count the wins/draws/losses at home and away arenas. Also, figure out GF & GA.
    for (int j = 0; j < 10; j++)
    {
        GF += matches[j].QM_score;
        GA += matches[j].OP_score;

        if (matches[j].QM_score > matches[j].OP_score)
            if (matches[j].home == 1)
                home_wins++;
            else
                away_wins++;
        else if (matches[j].QM_score < matches[j].OP_score)
            if (matches[j].home == 1)
                home_losses++;
            else
                away_losses++;
        else if (matches[j].home == 1)
            if (matches[j].home == 1)
                home_draws++;
            else
                away_draws++;
        else
            away_draws++;
    }

    printf("\n\tHome    Away\n\tW D L    W D L    GF GA GD  PTs\nQMUL    %d %d %d    %d %d %d    %d %d %d   %d\n\n", home_wins, home_draws, home_losses, away_wins, away_draws, away_losses, GF, GA, (GF - GA), (3 * (home_wins + away_wins) + (home_draws + away_draws)));
    return 0;
}