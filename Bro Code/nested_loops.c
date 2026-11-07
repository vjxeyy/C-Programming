#include <stdio.h>

int main() 
{

    for(int i = 1; i < 4; i++){
        for(int j = 1; j < 10; j++){
            printf("%d ", j);
        }
        printf("\n");
    }


    // multiplication table

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%3d ", i * j);
        }
        printf("\n");
    }


    // 2d 

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &rows);

    printf("Enter the # of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }



    return 0;
}
