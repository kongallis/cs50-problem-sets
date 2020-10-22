#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

void calcReadability(string text);

int main(void)
{
    //Reads text from user and prints it out
    string text = get_string("Text: ");
    printf("%s \n", text);
    //Calculates readability grade
    calcReadability(text);

    return 0;
}

void calcReadability(string text)
{
    // Declare and initialize all counters to 0
    int spacesNumber = 0;
    int lettersNumber = 0;
    int sentencesNumber = 0;
    //The number of all the characters
    int length = strlen(text);
    // Loop for every letter of the text
    for (int i = 0; i < length; i++)
    {
        //Checks for spaces
        if (text[i] == ' ')
        {
            spacesNumber++;
        }
        //Checks for sentences
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentencesNumber++;
        }
        //Checks for otehr characters that are not letters
        else if (text[i] == ';' || text[i] == '\'' || text[i] == '-' || text[i] == '"' || text[i] == ',' || text[i] == ':')
        {
        }
        else
        {
            // The rest of the characters are consequentyl letters
            lettersNumber++;
        }
    }
    // printf("%d letter(s)\n", lettersNumber);

    //Number of words -> spaces + 1
    // printf("%d word(s)\n", spacesNumber + 1);
    // printf("%d sentence(s)\n", sentencesNumber);
    // L: average number of letters per 100 words
    float L;
    // S: average number of sentences per 100 words
    float S;
    if (sentencesNumber == 1)
    {
        S = 1;
        L = (lettersNumber * 100) / (spacesNumber + 2);
    }
    else
    {
        S = (sentencesNumber * 100) / (spacesNumber + 1);
        L = (lettersNumber * 100) / (spacesNumber + 1);
    }

    // Coleman-Liau index
    float index = 0.0588 * L - 0.296 * S - 15.8;
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", round(index));
    }
}
