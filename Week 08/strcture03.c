#include <stdio.h>

struct complex {
    int imag;
    float real;
};

struct number {
    struct complex comp;
} num1, num2;

int main() {
    num1.comp.imag = 10;
    num1.comp.real = 11;
    printf("Complex Number: %.2f + %dj\n", num1.comp.real, num1.comp.imag);
    return 0;
}