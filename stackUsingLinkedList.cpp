#include <iostream>
using namespace std;

//node class represtating a single node in the linked list
class Node {
   public:
        int data;
        Node* next;

        Node(){
            next = NULL;
        
        }
};

//STACK class
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }
int push(int value)
    {
        Node *newnode = new Node();
        newnode->data = value;
        newnode->next = top;
        top = newnode;
        cout << "push value: " << value << endl;
        return value;
    }
    //pop operation: remove the topmost element from the stack
    void pop()
    {
       
    }
};