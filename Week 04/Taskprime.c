#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=30;i++)
    {
        for (j=2; j<i; j++)
        {
            if(i%j== 0)
             break;
        }
        if(j==i)
            printf("%d\n",i);
    }
    return 0;
}
