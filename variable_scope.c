#include <stdio.h>

// variable scope = Refers to where a variable is recognized and accessible.
//                  Variables can share the same name if
//                  they're in different scopes {}

// int result = 0; // GLOBAL SCOPE (hard to debug)

int add(int x, int y){
    int result = x + y;
    return result;
}

int subtract(int x, int y){
    int result = x - y;
    return result;
}

int main(){

    int x = 5;
    int y = 6;
    int result = 0;

    result = subtract(x, y);
    printf("%d\n", result);

    result = add(x, y);
    printf("%d\n", result);

    return 0;
}
