#include <bits/stdc++.h>

using namespace std;

class Node{
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

void LeftView(Node *root){
    if(root == NULL) return;
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int k = 0;
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        
        if(temp == NULL){
           k =0;
            if(!q.empty()) q.push(NULL);
        } else {
            if(k == 0){ cout<<temp->data<<" ";k++;}
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
        }
    
    }
}
Node *buildTree(Node *root){
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1) return NULL;
      root->left = buildTree(root->left);
      root->right = buildTree(root->right);
      return root;
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    LeftView(root);

    return 0;
}
