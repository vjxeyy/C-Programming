#include<stdio.h>
#include <stdbool.h>


// variable = A reusable container for a value.
//            Behaves as if it were the value it contains.


// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double = double-precision decimal number (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
// bool = true or false (1 byte, requires <stdbool.h>)


int main()
{   

    // int
    int age = 18;
    printf("%d\n", age);
    printf("Your age is %d\n", age);
    printf("\n");


    // float

    float a = 2.14555;
    printf("%f\n", a);
    printf("%.2f\n", a);
    printf("\n");


    // double

    double b = 55.678784847483;;
    printf("%.20lf\n", b);
    printf("%.2lf\n", b);
    printf("\n");


    // char

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favourite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);
    printf("\n");


    //array - known as array

    char name[] = "Vijay";
    char mail[] = "vijay123@gmail.com"; 

    printf("My name is %s\n", name);
    printf("Hello %s, bye..\n", name);
    printf("My mail is %s\n", mail);
    printf("\n");


    // boolean
    // C does not have a built-in boolean type, but we can use stdbool.h for boolean values

    
    
    bool isonline = true;
    // can be used in if statements

    printf("Is online: %d\n", isonline); // prints 1 for true
    printf("\n");


    if (isonline)
    {
        printf("User is online\n");
    }
    else
    {
        printf("User is offline\n");
    }


    return 0;

}