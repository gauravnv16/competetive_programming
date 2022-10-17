/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void PrintList(Node *head){
    if(head != NULL){
        cout<<head->data<<" ";
        PrintList(head->next);
    }
}

void InsBeg(int data,Node *head){
    Node *temp;
    temp = new Node(data);
    temp->next = head;
    head = temp;
    PrintList(head);
}

int main(){
    Node *head,*t1,*t2;
    head = new Node(1);
    t1 = new Node(2);
    t2 = new Node(3);
    
    head -> next = t1;
    t1->next = t2;
    
    InsBeg(0,head);
    return 0;
}

