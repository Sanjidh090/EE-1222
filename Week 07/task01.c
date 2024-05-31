//replace value a=6,b=5 to previous version a=5,b=6
#include<stdio.h>
int main()
{
    int a =6,b =5;
    int *p =&a,*q =&b;
    int temp;
    temp = *p;
    *p =*q; *q=temp;
    printf("Value of a is %d \n",a);
    printf("Value of b is %d ",b);
}