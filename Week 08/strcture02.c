#include <stdio.h>
#include <string.h>

typedef struct person {
    char name[50];
    int idno;
    float salary;
} person;

int main() {
    person person1;
    strcpy(person1.name, "Shahriar");
    person1.idno = 100;
    person1.salary = 10000.25;
    printf("Name: %s\n", person1.name);
    printf("Id no: %d\n", person1.idno);
    printf("Salary: %lf\n", person1.salary);
}
