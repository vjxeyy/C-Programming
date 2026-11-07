#include<stdio.h>
#include<string.h>

int main() 

{

    int age = 0;
    float gpa = 0.0;
    char grade = '\0';
    char name[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);


    getchar(); // Consume the newline character left in the input buffer by previous scanf
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Use fgets to read the full name including spaces
    name[strinlen(name) - 1] = '\0'; // Remove the newline character at the end of the name

    
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
    printf("Bye!");


    return 0;
}