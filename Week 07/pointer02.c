#include <stdio.H>
int main()
{
int a= 5,b=6;
int *p1=&a,*p2=&b;
printf("%d \n",p1);
printf("%d \n",&a+1);
printf("%d \n",*&a+2);

}