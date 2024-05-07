#include <stdio.h>

int main()
{
    int arr[4][4];
    int i, j, sum = 0;

    // Taking inputs
    printf("Enter the elements of the 1st matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the first matrix
    printf("The first matrix is:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of all elements in the matrix
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(j>i){sum += arr[i][j];}
        }
    }

    printf("The sum is %d\n", sum);

    return 0;
}
