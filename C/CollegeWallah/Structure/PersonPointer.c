#include <stdio.h>

typedef struct person
{
    int age;
    float weight;
} person;

int main()
{
    person p1;
    p1.age = 21;
    p1.weight = 96.5;
    printf("%d\n", p1.age);
    printf("%f\n", p1.weight);

    person *p = &p1;
    printf("%p\n", p);

    (*p).age = 22;
    (*p).weight = 100;

    printf("%d\n", p1.age);
    printf("%f\n", p1.weight);

    return 0;
}