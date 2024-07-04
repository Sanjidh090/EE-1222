#include <stdio.h>
struct s {
    char name[50];
    int roll;
    int phy;
    int chem;
};

int main() {
    int i, j;
    int temp = 0;
    struct s students[3];

    for (i = 0; i < 3; i++) {
        printf("Enter Name:\n");
        scanf("%s", students[i].name);
        printf("Enter Roll:\n");
        scanf("%d", &students[i].roll);
        printf("Enter Physics number:\n");
        scanf("%d", &students[i].phy);
        printf("Enter Chemistry Number:\n");
        scanf("%d", &students[i].chem);

        if (students[i].phy > temp) {
            temp = students[i].phy;
            j = i;
        }
    }

    for (i = 0; i < 3; i++) {
        printf("Name=%s  Roll=%d  Physics=%d  Chemistry=%d\n", students[i].name, students[i].roll, students[i].phy, students[i].chem);
    }

    printf("\nStudent with the highest Physics number:\n");
    printf("Name=%s  Roll=%d \n", students[j].name, students[j].roll);
    printf("Highest Physics number=%d\n", temp);

    return 0;
}
