#include <stdio.h>

int main() {
    float mark;
    printf("Enter marks: ");
    scanf("%f", &mark);

    if (mark < 0) {
        printf("Invalid mark");
    } else if (mark <= 300 && mark >= 240) {
        printf("First Class\n");
    } else if (mark <= 239 && mark >= 180) {
        printf("Second class\n");
    } else if (mark <= 179 && mark >= 120) {
        printf("Third Class\n");
    } else if (mark < 120) {
        printf("Fail\n");
    }

    return 0;
}
