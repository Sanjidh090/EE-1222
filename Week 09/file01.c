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
        printf("No file exists.");
    
    }
    else
    {
        printf("a file exists \n");
        for(int i=0;ch[i]!='\0';i++)
        {
        fputc(ch[i],file);
        }
    }
    fclose(file);
    
}
