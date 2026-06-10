#include<stdio.h>
#include<string.h>

int main(){

    typedef struct Book{
        char name[50];
        float price;
        int pages;
    } Book;

    Book Physics, Chemistry;

    strcpy(Physics.name, "Fundamentals of Physics");
    Physics.price = 650;
    Physics.pages = 800;
    
    strcpy(Chemistry.name, "Chemistry");
    Chemistry.pages = 730;
    Chemistry.price = 575;

    printf("The name of the book is: %s", Physics.name);

    

    return 0;
}