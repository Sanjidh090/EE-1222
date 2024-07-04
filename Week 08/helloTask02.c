#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int phy;
    int chem;
};
int main() {
    int i, maxP = 0, hP = 0;
    struct student students[3];
    for (i = 0; i < 3; i++) {
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Roll: ");
        scanf("%d", &students[i].roll);
        printf("Enter Physics score: ");
        scanf("%d", &students[i].phy);
        printf("Enter Chemistry score: ");
        scanf("%d", &students[i].chem);
        
        if (students[i].phy > maxP) {
            maxP = students[i].phy;
            hP = i;
        }
    }
    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Name: %s  Roll: %d  Physics: %d  Chemistry: %d\n",
               students[i].name, students[i].roll, students[i].phy, students[i].chem);
    }

    printf("\nStudent with the highest Physics score:\n");
    printf("Name: %s  Roll: %d\n", students[hP].name, students[hP].roll);
    printf("Highest Physics score: %d\n", maxP);

    return 0;
}
