#include<stdio.h>
typedef int* intPointer;
int main(){
    int a = 5, b = 7;
    intPointer x = &a, y = &b;

    printf("The address of %d is %p and the address of %d is %p", a, x, b, y);
    return 0;
}