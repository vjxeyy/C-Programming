#include <stdio.h>
#include <stdbool.h>

// logical operators = Used to combine or modify boolean expressions.

// && = AND
// || = OR
// ! = NOT

int main()
{
    {
        // AND
        
        int a = 10;
        int b = 20;

        printf("%d", a < b && b > 15);
    }

    {
        // OR

        int a = 10;
        int b = 20;

        printf("%d", a > b || b > 15);
    }

    {
        // NOT

        int a = 10;

        printf("%d", !(a > 20));
    }

    {
        // Boolean

        bool a = true;
        bool b = false;

        printf("%d\n", a && b);
        printf("%d\n", a || b);
        printf("%d\n", !a);
    }

    return 0;
}
