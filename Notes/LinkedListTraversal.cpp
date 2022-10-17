/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Node {
    int data;
    Node *next;
    Node(int data){
        this.data = data;
        next = NULL;
    }
}
void PrintList(Node *head){
    Node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data;
        ptr = ptr->next;
    }
}

