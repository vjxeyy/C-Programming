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


    return 0;
}
