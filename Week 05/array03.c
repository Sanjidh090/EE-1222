#include <stdio.h>

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arra[3][3]={1,2,5,4,5,6,7,5,9};
    int i, j;
    printf("The first matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("another matrix is:\n");
        for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arra[i][j]);
        }
        printf("\n");
    }
printf("here is the resultant matrix:\n");
        for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
             int sum=arr[i][j]-arra[i][j];
            printf("%d ",sum);
        }
        printf("\n");
        }
    return 0;
}