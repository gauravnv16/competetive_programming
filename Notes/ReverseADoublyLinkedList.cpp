#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    
    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};

void PrintList(Node *head){
    Node *ptr = head;
    
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

Node *RevLL(Node *head){
    Node *ptr = head,*temp = NULL;
    while(ptr != NULL){
        temp = ptr->prev;
        ptr->prev = ptr->next;
        ptr->next = temp;
        
        ptr = ptr->prev;
        
    }
    head = temp->prev;
    return head;
}
int main()
{
    Node *head = new Node(10);
    Node *s = new Node(20);
    Node *t = new Node(30);
    
    head -> next = s;
    s->next = t;
    s->prev = head;
    t->prev = s;
    
    head = RevLL(head);
    PrintList(head);

    return 0;
}
