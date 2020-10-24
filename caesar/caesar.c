#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char *argv[]) {

    printf("Argument number %d\n", argc);
    if (argc == 1 || argc > 2) {
        printf("ERROR: Please insert only 1 argument.\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if(!(argv[1][i] >= 48 & argv[1][i] <= 57 ))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int cipherKey =
    // 26 letters
    if (argv[1] > 26) {

    }
    // k = cipher key

    // Without command line args OR with more than 1 command arg




    return 0;
}