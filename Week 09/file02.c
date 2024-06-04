#include <stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    printf("Enter a number: ");
    gets(ch);
    file = fopen("text","w");
    if(file==NULL)
    {
        printf("No file exits");
    
    }
    else
    {
        printf("a file exits \n");
        fputs(ch,file);
    }
    fclose(file);
    
}