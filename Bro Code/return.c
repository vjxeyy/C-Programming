#include <stdio.h>
#include <stdbool.h>

// return = reeturns a value back to where you call a function

int squareInt(int num){
    return num * num;
}

double squareDouble(double num){
    return num * num;
}

double cube(double num){
    return num * num * num;
}

bool ageCheck(int age){

    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}

int getMax(int x, int y){

    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}




int main() {

    // int
    int a = squareInt(2);
    int b = squareInt(3);
    int c = squareInt(4);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    // double
    double x = squareDouble(2.1);
    double y = squareDouble(3.2);
    double z = squareDouble(4.3);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    double cubeX = cube(2);
    double cubeY = cube(3);
    double cubeZ = cube(4);

    printf("%lf\n", cubeX);
    printf("%lf\n", cubeY);
    printf("%lf\n", cubeZ);

    // bool
    int age = 12;

    if(ageCheck(age)){
        printf("You may sign up\n");
    }
    else{
        printf("You must be 18+ to sign up\n");
    }

    // getMax
    int max = getMax(4, 5);

    printf("%d\n", max);

    return 0;
}
