#include <iostream>
using namespace std;

#define MAX 10

int stk[MAX];
int top = -1;

void push(int num)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow! Cannot insert any further!" << endl;
        return;
    }
    top++;
    stk[top] = num;
    cout << num << " has been inserted to the stack." << endl;
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow! Nothing to pop." << endl;
        return;
    }
    cout << stk[top] << " has been poped from the stack!" << endl;
    stk[top] = 0;
    top--;
    
}

void topele()
{
    if (top == -1)
    {
        cout << "Stack Underflow!, nothing to show!" << endl;
        return;
    }

    cout << "Top element is: " << stk[top] << endl;
}

void display()
{
    if (top == -1)
    {
        cout << "Stack Underflow, stack empty." << endl;
        return;
    }

    cout << "The whole stack: " << endl;
    for (int i = top; i >=0; i--)
    {
        cout << stk[i] << endl;
    }
    cout << endl;
}

void size()
{
    if(top == -1)
    {
        cout << "Stack empty, size 0" << endl;
        return;
    }

    cout << "The size of the stack is: " << top+1 << endl;
}

int main()
{
    push(78);
    push(25);
    push(8);
    push(4);
    push(5);

    cout << endl;

    size();
    topele();
    display();

    pop();
    pop();

    cout << endl;

    size();
    topele();
    display();

}