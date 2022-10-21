/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


void PrintNodeAtDistK(Node *root,int k){
    if(root == NULL) return;
    
    if(k == 0) cout<<root->data<<" ";
    
    PrintNodeAtDistK(root->left,k-1);
    PrintNodeAtDistK(root->right,k-1);
}


void LevelOrderTraversal(Node *head){
    Node *ptr = head;
    
    queue<Node *> q;
    
    q.push(ptr);
    while(!q.empty()){
        Node *t = q.front();
        cout<<t->data<<" ";
        q.pop();
        if(t->left != NULL){
            q.push(t->left);
        }
        if(t->right != NULL){
            q.push(t->right);
        }
    }
}
int main()
{
    Node *head = new Node(1);
    Node *s = new Node(2);
    Node *t = new Node(3);
    
    head->left = s;
    head->right = t;
    
    s->left = new Node(4);
    s->right = new Node(5);
    
    LevelOrderTraversal(head);
    PrintNodeAtDistK(head,0);

    return 0;
}
