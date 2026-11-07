#include <stdio.h>
int main ()
{
    // break = Break out of a loop (STOP)
    // continue = Skip current cycle of a loop (SKIP)

    // break example: stop the loop when i reaches 6
    for(int i = 1; i <= 10; i++){

        if(i == 6){
            break;
        }

        printf("%d\n", i);
    }

    // continue example: skip 4
    for(int i = 1; i <= 10; i++){

        if(i == 4){
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
