#include <stdio.h>

int main()
{
    int arr[3][3];
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}