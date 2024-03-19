#include <stdio.h>
main()
{
    int custnum,unit;
    float price;
    printf("Enter customer no. and unit consumed:");
    scanf("%d %d",&custnum,&unit);
    if(unit>0 && unit<=200)
        price=0.5*unit;
    else if(unit<=400)
        price =100+0.65*(unit-100);
    else
        price =230+0.8*(unit-300);
    printf("Customer No.:%d ,Charge = %0.2f",custnum,price);
}
