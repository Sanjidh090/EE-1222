#include <stdio.h>
int sum(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 10 + sum(num / 10));
}

int main() {int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int result = sum(num);
    printf("The sum of the digits of %d is: %d", num, result);
    return 0;
}
