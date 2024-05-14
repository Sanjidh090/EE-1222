#include <stdio.h>
int reversing(int num)
{
    int rev= 0;
    while(num!=0)
    {   
        int digit= num%10;
        rev = rev*10+ digit;
        num=num/10;
    }
    return rev;
}
int main()
{
    int num;
    scanf("%d",&num);
    int rev= reversing(num);
    printf("%d",rev);

}