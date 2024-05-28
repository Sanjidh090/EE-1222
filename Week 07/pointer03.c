#include <stdio.h>
int main()
{
    int a[10];
    int i;
    int *p;
    p = &a[0];

    for(i=0;i<5;i++)
    {
        scanf("%d", p+i); // Remove the '\n' and use 'p+i' instead of '*p+i'
    }
    for(i=0;i<5;i++)
    {
        printf("%d \n", *(p+i)); // Use '*(p+i)' to dereference the pointer and get the value
    }
    return 0;
}