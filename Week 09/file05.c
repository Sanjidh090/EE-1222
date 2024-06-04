#include <stdio.h>
int main()
{
    FILE *file;
    char name[40];
    char dept[40];
    file = fopen("text","a");
    if(file==NULL)
    {
        printf("No file exits");
    
    }
    else
    {
        printf("a file exits \n");
    for(int i=0;i<2;i++)
    {
        printf("Enter your name: ");
        gets(name);
        printf("Enter dept Name: ");
        gets(dept);
 
        fprintf(file,"%s \t %s \n",name,dept);
        
    }
    }
    fclose(file);
    
}