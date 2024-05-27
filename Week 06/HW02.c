//Convert a decimal number into corresponding Binary Number using recursion
#include <stdio.h>
int bin(int a) {
    if(a >0) {
        bin(a / 2);
        printf("%d", a % 2);
    }
}
int main()
{

    int a;
    printf("Enter Decimal:");
    scanf("%d",&a);
    printf("Binary Number: ");
    if (a==0) printf("0");
    else
        bin(a);
    return 0;
    }
