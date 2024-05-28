#include <stdio.H>
int main()
{
    int a =5;
    int *p=&a;
    p=&a;
    printf("The value of a is %d \n",a);
    printf("The address of a is : %d \n",&a);
    printf("The value of p is %d \n",p);
    printf("The address of p is %d \n",&p);
    printf("The value of *p is %d",*p);
}