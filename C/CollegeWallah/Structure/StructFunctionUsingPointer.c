#include<stdio.h>

typedef struct person
{
    int age;
    float weight;
} person;

void editStruct(person* p){
    (*p).age = 25;
    (*p).weight = 100;

};

void editStruct2(person* p){
    p->age = 30;
    p->weight = 110;
}

int main(){

    person p1;
    p1.age = 21;
    p1.weight = 95;
    //normal structure
    printf("%d\n%f\n", p1.age, p1.weight);

    editStruct(&p1);
    //structer after editing using function and pointers(method -1)
    printf("%d\n%f\n", p1.age, p1.weight);

    editStruct2(&p1);
    //structure after editing the structure using method - 2
    printf("%d\n%f\n", p1.age, p1.weight);

    return 0;

}