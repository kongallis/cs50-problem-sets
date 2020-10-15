#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfLines;
    printf("Enter a number between 1 and 8: ");
    scanf("%d", &numberOfLines);

    if (numberOfLines >= 1 && numberOfLines <= 8)
    {
        printf("Number of lines = %d \n", numberOfLines);

        if (numberOfLines == 1)
        {
            printf("#  #\n");
        }
        else
        {
            for (int i = 1; i <= numberOfLines; i++)
            {
                int numberOfSpaces = numberOfLines - i;
                int numberOfBricks = i;

                // Twice the size of spaces and bricks plus 2 spaces between
                char line[2 * numberOfLines + 2];
                for (int x = 1; x <= numberOfSpaces; x++)
                {
                    strcat(line, " ");
                }
                for (int y = 1; y <= numberOfBricks; y++)
                {
                    strcat(line, "#");
                }
                // Add spaces between
                strcat(line, "  ");
                for (int y = 1; y <= numberOfBricks; y++)
                {
                    strcat(line, "#");
                }
                for (int x = 1; x <= numberOfSpaces; x++)
                {
                    strcat(line, " ");
                }

                printf("result: %s\n", line);
            }
        }
    }
    else
    {
        printf("Incorrect input.\n");
        main();
    }

    return 0;
}