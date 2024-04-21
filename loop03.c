#include<stdio.h>
int main()
{
    int n=1;
    int sum =0;
    do
    {
        sum=sum+n;
        n++;
    }while(n<=10);
    printf("sum =%d",sum);
}
