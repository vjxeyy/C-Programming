#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Pseudo-random = Appear random but are determined by a
    //                 mathematical formula that uses a seed value
    //                 to generate a predictable sequence of numbers.
    //                 advanced: Mersenne Twister or /dev/random

    // seed the generator with the current time so each run differs
    srand(time(NULL));

    // rand() returns a number between 0 and RAND_MAX
    int randomNum1 = rand();
    printf("%d\n", randomNum1);

    // random number between 1 and 6 (dice roll)
    int randomNum2 = (rand() % 6) + 1;
    printf("%d\n", randomNum2);

    // random number between min and max (inclusive)
    int min = 50;
    int max = 100;
    int randomNum3 = (rand() % (max - min + 1)) + min;
    printf("%d\n", randomNum3);

    // coin flip (0 = heads, 1 = tails)
    int coin = rand() % 2;
    printf("Coin flip: %s\n", coin == 0 ? "Heads" : "Tails");

    // roll two dice and add them up
    int die1 = (rand() % 6) + 1;
    int die2 = (rand() % 6) + 1;
    printf("Dice: %d + %d = %d\n", die1, die2, die1 + die2);

    // random float between 0.0 and 1.0
    double randomFloat = (double)rand() / RAND_MAX;
    printf("Random float: %f\n", randomFloat);

    // pick a random item from an array
    char *colors[] = {"Red", "Green", "Blue", "Yellow", "Purple"};
    int size = sizeof(colors) / sizeof(colors[0]);
    printf("Random color: %s\n", colors[rand() % size]);

    // generate 5 random lottery numbers (1-49)
    printf("Lottery numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", (rand() % 49) + 1);
    }
    printf("\n");

    return 0;
}
