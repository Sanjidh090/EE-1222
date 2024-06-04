#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("text","r");
    if(file==NULL)
    {
        printf("No file exits");
    }
    else
    {
        //printf("a file exits \n");
        //fprintf(file,"%s \n",ch);
        printf("Name \t Dept \t roll \t email \n");
        while (!feof(file))
        {  
            char ch = fgetc(file);

            printf("%c",ch);
        }
    }
    fclose(file);
    
}