#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

string calcCipherText(string text,int cipherKey);

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

    int cipherKey = atoi(argv[1]) % 26;

    // printf("Cipher Key = %d\n", cipherKey);

   string text = get_string("plaintext: ");
   string cipherText = calcCipherText(text,cipherKey);
   printf("ciphertext: %s\n", cipherText);







    return 0;
}


string calcCipherText(string text, int cipherKey) {

    // char plainText[strlen(text)] = text;
    for (int i = 0; i < strlen(text); i++){
        char character = text[i];
        // lowercase
       if ( character >= 97 && character <= 122){
             /// character + cipherkey => 130
             // orio einai 122 prepei => 97 + 8

             int result = character + cipherKey;
             result = result % 122;

             if (result < 97)
             {
                 result += 96;
             }
             text[i] = result;
       }
       // uppercase
       else if ( character >= 65 && character <= 90  ){
             int result = character + cipherKey;
             result = result % 90;

             if (result < 65)
             {
                 result += 64;
             }
             text[i] = result;
       }
    }
    printf("%s",text);
    return text;
}


// gramma --> noumero + cipherKey >

// 65-90
// 97 - 122