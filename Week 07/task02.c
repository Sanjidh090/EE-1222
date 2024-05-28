#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    gets(s);
     int digits =0,capitals=0,smalls=0;
     for(int i=0;s[i]!=0;i++)
     {
        if(s[i]>=48 && s[i]<=57)
        digits++;
     }
          for(int i=0;s[i]!=0;i++)
     {
        if(s[i]>='A' && s[i]<='Z')
        capitals++;
     }
          for(int i=0;s[i]!=0;i++)
     {
        if(s[i]>=97 && s[i]<=122)
        smalls++;
     }
     printf("The number of digits are %d \n",digits);
     printf("The number of CAPITALS are %d \n",capitals);
     printf("The number of SMALLS are %d",smalls);
}