#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

string calcCipherText(string text, int cipherKey);

// Pass the command promt argumens
int main(int argc, char *argv[])
{
    // Checks if there is only 1 argument
    printf("Argument number %d\n", argc);
    if (argc == 1 || argc > 2)
    {
        printf("ERROR: Please insert only 1 argument.\n");
        return 1;
    }

    // Checks if the argument is a number
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!(argv[1][i] >= 48 & argv[1][i] <= 57))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int cipherKey = atoi(argv[1]) % 26;

    // Get the plain text from the user
    string text = get_string("plaintext: ");
    string cipherText = calcCipherText(text, cipherKey);
    printf("ciphertext: %s\n", cipherText);
    return 0;
}

// Translates each letter of the plaintext to ciphertext
string calcCipherText(string text, int cipherKey)
{

    for (int i = 0; i < strlen(text); i++)
    {
        char character = text[i];
        // lowercase letters
        if (character >= 97 && character <= 122)
        {
            int result = character + cipherKey;
            result = result % 122;

            if (result < 97)
            {
                result += 96;
            }
            text[i] = result;
        }
        // uppercase letters
        else if (character >= 65 && character <= 90)
        {
            int result = character + cipherKey;
            result = result % 90;

            if (result < 65)
            {
                result += 64;
            }
            text[i] = result;
        }
    }
    printf("%s", text);
    return text;
}
