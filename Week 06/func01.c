#include <stdio.h>


int addition(int num1, int num2);


int addition(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    //int sumt = addition(5, 6);
    //printf("%d", sumt);
    //return 0;}
    int var1,var2;
    printf("enetr the numbers:");
    scanf("%d %d",&var1,&var2);
    int result= addition(var1, var2);
    printf("%d",result);
}
