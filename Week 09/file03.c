#include <stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    printf("Enter a write: ");
    gets(ch);
    file = fopen("text","a");
    if(file==NULL)
    {
        printf("No file exits");
    
    }
    else
    {
        printf("a file exits \n");
        fprintf(file,"%s \n",ch);
    }
    fclose(file);
    
}