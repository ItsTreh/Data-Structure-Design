// Create a function that prints the characters saved in an array.
// Array of characters = array of arrays = matrix of characters
// It has to consider the restrictions that the matrix stablishes (static memory):
// It needs to specify (at least) the size of the last dimension: char words[][6] = { "HELLO", "WORLD", "SUN" };

#include <stdio.h>
#include <stdlib.h>

void sentence(char string[][10], int R)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            // This if is an addition to stop printing invisible chars after the array ends
            // And it directly goes to the next array
            if (*(*(string + i) + j) == '\0')
            {
                // This break makes the loop stop and go to the next set of chars
                break;
            }
            else
            {
                // This is one way
                // printf("%c", string[i][j]);

                // And this is another with pointers
                printf("%c", *(*(string + i) + j));
            }
        }
        // This is just to print each word apart
        printf("\n");
    }
}

int main()
{
    char words[][10] = {"HELLO", "WORLD", "SUN"};

    sentence(words, 3);

    return 0;
}