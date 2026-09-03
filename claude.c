#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
