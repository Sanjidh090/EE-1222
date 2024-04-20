#include <stdio.h>

int main() {
    float mark;
    printf("Enter marks: ");
    scanf("%f", &mark);

    if (mark >= 240 && mark <= 300) {
        printf("First Class\n");
    } else if (mark >= 180) {
        printf("Second Class\n");
    } else if (mark >= 120) {
        printf("Third Class\n");
    } else if (mark >= 0) {
        printf("Fail\n");
    } else {
        printf("Invalid mark\n");
    }

    return 0;
}

