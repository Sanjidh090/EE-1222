#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[40];
    char dept[40];
    char roll[40];
    char email[40];
    int email_count = 0;  
    file = fopen("text", "a");
    if (file == NULL)
    {
        printf("No file exists\n");
        return 1;
    }
    else
    {
        printf("A file exists\n");
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your name: ");
        gets(name);
        name[strcspn(name, "\n")] = 0;  // Remove trailing newline character

        printf("Enter dept name: ");
        gets(dept);
        dept[strcspn(dept, "\n")] = 0;

        printf("Enter roll: ");
        gets(roll);

        printf("Enter email id: ");
        gets(email);
        email[strcspn(email, "\n")] = 0;

        fprintf(file, "%s\t%s\t%s\t%s\n", name, dept, roll, email);

        if (strlen(email) > 0)
        {
            email_count++;
        }
    }

    fclose(file);
    printf("Number of emails input: %d\n", email_count);
    return 0;
}
