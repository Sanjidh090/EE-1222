#include <stdio.h>
#include <math.h>

struct complex {
    float real;
    float imag;
};

float findSQRT(float N) {
    return sqrt(N);
}

int main() {
    struct complex num1, num2, result;
    printf("Enter real part of the first complex number: ");
    scanf("%f", &num1.real);
    printf("Enter imaginary part of the first complex number: ");
    scanf("%f", &num1.imag);

    printf("Enter real part of the second complex number: ");
    scanf("%f", &num2.real);
    printf("Enter imaginary part of the second complex number: ");
    scanf("%f", &num2.imag);

    
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    
    printf("Sum: %.2f + %.2fj\n", result.real, result.imag);

   
    float Nreal = num1.real*num1.real + num2.real*num2.real;
    float Nimag = num1.imag*num1.imag + num2.imag*num2.imag;
    
    float a1 = findSQRT(Nreal);
    float a2 = findSQRT(Nimag);


    printf("Magnitude of the sum: %.2f +j%.2f\n", a1,a2);

    return 0;
}
