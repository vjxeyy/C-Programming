#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// while loop = Continue some code WHILE the condition remains true
//              Condition must be true for us to enter while loop


int main() {

    int number1 = 0;

    while(number1 <= 0){
        printf("Enter a number greater than 0: ");
        scanf("%d", &number1);
    }

    int number2 = 1;

    do{
        printf("Enter a number greater than 0: ");
        scanf("%d", &number2);
    }while(number2 <= 0);


    // string


    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);


    // boolean

    bool isRunning = true;
    char response = '\0';

    // while
    
    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }

    printf("You exit the game\n");


    // do while

    isRunning = true;

    do{
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }while(isRunning);

    printf("You exit the game");

    return 0;
}
