#include <stdio.h>
#include <cs50.h>
#include <string.h>

void calcReadability(string text);

int main(void)
{
    string text = get_string("Text: ");
    printf("%s \n", text);
    printf("%zu \n", strlen(text));
    //Calculates readability grade
    calcReadability(text);

    return 0;
}

void calcReadability(string text)
{
    //Number of words -> spaces + 1
    int wordsNumber = 0;
    int lettersNumber = 0;
    int sentencesNumber = 0;
    //The number of all the characters
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        if (text[i] == ' ')
        {
            wordsNumber++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentencesNumber++;
        }
        else if (text[i] == ';' || text[i] == '\'' || text[i] == '-' || text[i] == '"' || text[i] == ',' || text[i] == ':')
        {
            printf("FOUND YOU!\n");
        }
        else
        {
            lettersNumber++;
        }
    }
    printf("%d letter(s)\n", lettersNumber);
}
