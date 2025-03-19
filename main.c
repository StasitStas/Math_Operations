#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int main() {
    printf("Welcome! This program performs basic arithmetic operations.\n");

    int a = 5, b = 100; // change-b-value
    printf("Sum: %d\n", add(a, b));
    printf("Difference: %d\n", subtract(a, b));

    return 0;
}
