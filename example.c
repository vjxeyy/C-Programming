#include <stdio.h>

int main() {
    double a, b, c;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Difference between number 1 and number 2: %.2lf\n", a - b);
    printf("Difference between number 2 and number 3: %.2lf\n", b - c);
    printf("Difference between number 1 and number 3: %.2lf\n", a - c);

    return 0;
}
