#include <stdio.h>

// function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    int x = 10, y = 5;

    printf("Addition: %d\n", add(x, y));        // 10 + 5 = 15
    printf("Subtraction: %d\n", subtract(x, y)); // 10 - 5 = 5
    printf("Multiplication: %d\n", multiply(x, y)); // 10 * 5 = 50
    printf("Division: %d\n", divide(20, 4));    // 20 / 4 = 5

    return 0;
}

// function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;   // exact division assumed
}