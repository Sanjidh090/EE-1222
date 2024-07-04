#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int phy;
    int chem;
};

int main() {
    int i, maxP = 0, hP = 0, maxTotal = 0, hTotal = 0;
    struct student students[3];

    for (i = 0; i < 3; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll);
        scanf("%d", &students[i].phy);
        scanf("%d", &students[i].chem);

        if (students[i].phy > maxP) {
            maxP = students[i].phy;
            hP = i;
        }

        int total = students[i].phy + students[i].chem;
        if (total > maxTotal) {
            maxTotal = total;
            hTotal = i;
        }
    }

    for (i = 0; i < 3; i++) {
        printf("Name: %s  Roll: %d  Physics: %d  Chemistry: %d\n",
               students[i].name, students[i].roll, students[i].phy, students[i].chem);
    }

    printf("\nStudent with the highest Physics score:\n");
    printf("Name: %s  Roll: %d\n", students[hP].name, students[hP].roll);
    printf("Highest Physics score: %d\n", maxP);

    printf("\nStudent with the highest total score:\n");
    printf("Name: %s  Roll: %d\n", students[hTotal].name, students[hTotal].roll);
    printf("Highest total score: %d\n", maxTotal);

    return 0;
}
