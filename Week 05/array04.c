 #include <stdio.h>

int main()
{
    int arr[3][3],arra[3][3];
    int i, j;
    //takimg input for first matrix
    printf("Enter the elements of the 1st matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //taking input for second matrix
        printf("Enter the elements of the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("b[%d][%d]=", i, j);
            scanf("%d", &arra[i][j]);
        }
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
             int sum=arr[i][j]*arra[i][j];
            printf("%d ",sum);
        }
        printf("\n");
        }
    return 0;
}