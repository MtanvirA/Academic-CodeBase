#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    float cgpa;
    char name[50];
} student;

int main()
{
    student s1;

    strcpy(s1.name, "Tanvir");
    s1.id = 2302068;
    s1.cgpa = 3.87;

    student *p1 = &s1;

    printf("%p\n", &s1.id);
    printf("%p\n", &s1.cgpa);
    printf("%p\n", &s1.name);

    printf("%p\n", p1);

    return 0;
}