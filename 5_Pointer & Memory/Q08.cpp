/*Implement a dynamic stack (push/pop) using a pointer-based linked list without STL.
HINT
struct Node { int val; Node* next; }; maintain a top pointer
LOGIC INSIGHT — Each node contains data + pointer to next. Push = prepend new node. Pop = remove head*/


#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int val;
    Node* next;
};

Node* top = NULL;

void push(int x){
    Node* newNode = new Node;
    newNode->val = x;
    newNode->next = top;
    top = newNode;
}

void pop()
{
    if(top == NULL){
        cout << "Stack Underflow\n";
        return;
    }

    Node* temp = top;
    top = top->next;
    delete temp;
}

int peek(){
    if(top == NULL)
        return -1;

    return top->val;
}

void display(){
    Node* temp = top;
    
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    push(30);
    push(50);
    push(90);
    push(20);

    display();

    cout << "Top element: " << peek() << "\n";

    pop();

    display();

    cout << "Now new top element will be after poping: " << peek() << "\n";

    return 0;
}