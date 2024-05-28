#include <stdio.h>
#include <string.h>
int main()
{
    char a[]= "Agagxhgax"; //char a[]={'A','C','S','\0'}; //
    gets(a);
    int length = sizeof(a) / sizeof(a[0]); 
    for(int i=0;a[i]!='\0';i++)      //for(int i=0;i<length;i++)
    {
        printf(" %c ",a[i]);
    }
}
