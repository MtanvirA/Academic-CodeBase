#include<stdio.h>
#include<string.h>


int main(){

    struct fighter{
        int speed;
        int price;
        int attack; 
        char codename[20];
    };

    struct fighter F22;
    F22.speed = 3;
    F22.price = 120;
    F22.attack = 7;

    struct fighter F35;

    F35.price = 80;
    F35.speed = 2;
    F35.attack = 6;
   
    printf("The price of the F22 is: %dM\n", F22.price);
    printf("The price of the F35 is: %dM", F35.price);

    return 0;
}