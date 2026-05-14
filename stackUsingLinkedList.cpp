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
       if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }
        Node *temp = top;
        top = top->next;
        cout << "Popped value: " << temp->data << endl;
    }
//peel /top operation: retrive the value of the element witchout removing
    void peek()
    {
        if (top == NULL)
        {
            cout << "List is Empty." << endl;
        }
        else
        {
             Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " ";
                current = current->next;
            }
             cout << endl;
        } //return the value of the top node
    }
    //isEmpaty operation: check of the stack is empty
    bool isEmpty()
    {
        return top == NULL;//return true if the top pointer is null, indicating that the stack is empty 
    }
};
int main()
{
    Stack stack;

    int choice = 0;
    int value;

};