#include <stdio.h>
#include <stdbool.h>

// function prototype = Provide the compiler w/ information about a function's:
//                       name, return type, and parameters before its actual definition.
//                       Enables type checking and allows functions to be used before
//                       they're defined.
//                       Improves readability, organization, and helps prevent errors.

void hello(char name[], int age); //function prototype
bool ageCheck(int age);

int main() {

    hello("Spongebob", 30);

    if(ageCheck(14)){
        printf("You are old enough to work at the Krusty Krab");
    }
    else{
        printf("You must be 16+ to work at the Krusty Krab");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    if(age >= 16){
        return true;
    }
    else{
        return false;
    }

    return age >= 16;
}
