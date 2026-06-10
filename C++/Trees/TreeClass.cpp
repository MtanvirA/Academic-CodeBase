#include<iostream>
#include<algorithm>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};
//display the tree
void displayTree(Node* root)

{
    if(root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
        
    // cout << endl; 
}
//sum of the nodes
int sumTree(Node* root)
{
    if(root == NULL) return 0;
    int sum = root->val+sumTree(root->left) + sumTree(root->right);
    return sum;
}
//total nodes
int sizeTree(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int size = 1 + sizeTree(root->left) + sizeTree(root->right);
    return size;   
}
//max node 
int maxNode(Node* root)
{
    if(root == NULL) return INT_MIN;
    return max(root->val, max(maxNode(root->left), maxNode(root->right)));
}
//min node
int minNode(Node* root)
{
    if(root == NULL) return INT_MAX;
    return min(root->val, min(minNode(root->left), minNode(root->right)));
}
//product of the nodes of the tree
int product(Node* root)
{
    if(root == NULL) return 1;
    return root->val*product(root->left)*product(root->right);
}
//levels of the binary tree
int levels(Node* root)
{
    if(root == NULL) return 0;
    return 1+max(levels(root->left), levels(root->right));
}
//

// main function
int main()
{
    Node* a = new Node(1); //root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    
    //connections 
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout << endl;
    cout << "Sum of the tree is: " << sumTree(a) << endl;
    cout<< "The size of the tree is: " << sizeTree(a) << endl;
    cout << "The max node of the tree is: " << maxNode(a) << endl;
    cout << "The min node of the tree is: " << minNode(a) << endl;
    cout << "The product of the tree is: " << product(a) << endl;
    cout << "The total levels of the tree is: " << levels(a) << endl;
}