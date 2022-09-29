#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // To prompt user for height.
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // Making of the mario right-sided pyramid block.
    // Makes the required numbers of rows.
    int row;
    for (row = 0; row < h; row++)
    {
        // Push the required number of spaces into each rows.
        int space;
        for (space = 0; space < h - row - 1; space++)
        {
            printf(" ");
        }
        // Prints the required numbers of hashes on each columns.
        int clmn;
        for (clmn = 0; clmn <= row; clmn++)
        {
            printf("#");
        }
        printf("\n");
    }
}
