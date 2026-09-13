#include <stdio.h>

int main()
{
    // Switch - An alternative to using many if-else statements
    //          More efficient with fixed integer values


    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid day");
    }

    return 0;
}