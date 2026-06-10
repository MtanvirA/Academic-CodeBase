#include<stdio.h>
#include<string.h>

int main(){

    struct book{
        char name[50];
        float price;
        int pages;
    }Physics, Chemistry, Biology;

    strcpy(Physics.name, "Fundamentals of Physics");
    Physics.price = 650;
    Physics.pages = 800;
    
    strcpy(Chemistry.name, "Chemistry");
    Chemistry.pages = 730;
    Chemistry.price = 575;

    printf("The name of the book is: %s", Physics.name);

    

    return 0;
}