#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("text","r");
    int email_count=0;
    if(file==NULL)
    {
        printf("No file exits");
    }
    else
    {
 
        printf("Name \t Dept \t roll \t email \n");
        while (!feof(file))
        {  
            char ch = fgetc(file);
            printf("%c",ch);
            if(ch=='@')
            {
                email_count++;
            }
            
        }
        printf("The number of emails is %d \n",email_count);
    }
    fclose(file);
    
}