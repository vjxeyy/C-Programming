#include<stdio.h>


/* Format specifiers =  Special tokens that begin with % symbol, 
                        followed by a character that specifies the data type
                        and optional modifiers (width, precision, flags). 
                        They control how data is displayed or interpreted.

%d → int
%f → float
%lf → double (especially in scanf)
%c → char
%s → string
%u → unsigned int
%x → hexadecimal
%o → octal

*/


int main() 
{

    
    int age = 20;
    float marks = 95.5;
    char grade = 'A';
    char name[] = "Vijay";

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);
    printf("\n");


    // width specifier

    /*
    Specifies the minimum number of characters/spaces used to display a value.
    Example: %5d
    */

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%3d\n", num1);
    printf("%3d\n", num2);   
    printf("%3d\n", num3);

    printf("%4d\n", num1);
    printf("%4d\n", num2);   
    printf("%4d\n", num3);

    printf("%04d\n", num1);
    printf("%04d\n", num2);   
    printf("%04d\n", num3);

    printf("%+d\n", num1);
    printf("%+d\n", num2);   
    printf("%+d\n", num3);

    printf("\n");


    // precision specifier

    /*
    Specifies the number of digits after the decimal point for floating-point values.
    //Example: %.2f → 2 digits after the decimal.
    */

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = 100.0;

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);      

    printf("\n");

    // flags specifier

    /*
    Flags are special characters that modify how the output is formatted.
    Examples:
    - → left-align
    + → show + sign
    0 → fill empty spaces with zeros

    */


    return 0;
}

