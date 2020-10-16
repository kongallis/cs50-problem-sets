#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    double changeOwned;
    printf("How much change is owed? \n");
    scanf("%lf", &changeOwned);
    //Check if the number is negative
    if (changeOwned >= 0.01)
    {

        //Convert owned change from dollars to cents
        float cents = round(changeOwned * 100);
        printf("CENT: %f\n", cents);
        int number25s = cents / 25;
        printf("25s: %d\n", number25s);
        int number10s = (cents - number25s * 25) / 10;
        printf("10s: %d\n", number10s);
        int number5s = (cents - number25s * 25 - number10s * 10) / 5;
        printf("5s: %d\n", number5s);
        int number1s = (cents - number25s * 25 - number10s * 10 - number5s * 5);
        printf("1s: %d\n", number1s);

        int minimumNumberOfCoins = number25s + number10s + number5s + number1s;
        printf("TOTAL COINS: %d\n", minimumNumberOfCoins);
    }
    else
    {
        printf("Invalid input.\nPlease enter a valid number.");
        main();
    }

    return 0;
}
