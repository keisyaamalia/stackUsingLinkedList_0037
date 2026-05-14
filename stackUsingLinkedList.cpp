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
};