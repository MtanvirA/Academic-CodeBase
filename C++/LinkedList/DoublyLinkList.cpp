#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(Node* head)
{
    cout << "The linked list is: " << endl;
    while(head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void displayRev(Node* head)
{
    if(head == NULL) return;
    displayRev(head->next);
    cout << head->val << " ";
}
void displayRev2(Node* tail)
{
    cout << "The reversed doubly link list: " << endl;
    while(tail)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
int main()
{
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    
    display(a);
    cout << "The reversed linklist is:" << endl;
    displayRev(a);
    cout << endl;
    displayRev2(e);
}