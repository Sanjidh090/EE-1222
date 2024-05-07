#include <stdio.h>

int main()
{
    int arr[3][2];
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("a[%d][%d]=", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //transpose matrix
    printf("The transpose matrix is\n");
        for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}