#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfLines;
    printf("Enter the number of lines: ");
    scanf("%d", &numberOfLines);
    printf("Number of lines = %d \n", numberOfLines);

    if (numberOfLines == 1)
    {
        printf("#\n");
    }
    else
    {
        for (int i = 1; i <= numberOfLines; i++)
        {
            int numberOfSpaces = numberOfLines - i;
            int numberOfBricks = i;
            // printf("i: %d\n", i);
            // printf("numberOfSpaces: %d\n", numberOfSpaces);
            // printf("numberOfBricks: %d\n", numberOfBricks);

            char line[numberOfLines];
            for (int x = 1; x <= numberOfSpaces; x++)
            {
                strcat(line, " ");
            }
            for (int y = 1; y <= numberOfBricks; y++)
            {
                strcat(line, "#");
            }
            printf("result: %s\n", line);
        }
    }

    return 0;
}