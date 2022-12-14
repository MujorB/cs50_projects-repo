#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10, 0};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        puts("Player 1 wins!");
    }
    else if (score1 == score2)
    {
        puts("Tie!");
    }
    else
    {
        puts("Player 2 wins!");
    }

}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int scrs, summation = 0, zeroPoint = 26;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] < 'Z')
        {
            scrs = word[i] - 'A';
        }
        else if (word[i] > 'Z')
        {
            scrs = word[i] - 'a';
        }

        // Checks for Zeropoint Scores(non alphabet)
        if (scrs < 0)
        {
            scrs = zeroPoint;
        }

        summation += POINTS[scrs];
    }

    return summation;
}