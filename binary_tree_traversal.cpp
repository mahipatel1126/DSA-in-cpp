#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
 struct Node{
        int data;
        struct Node *left, *right;
     
      Node(int val) {
        data = val;
        left = right = NULL;
    }
    };
Node*  create(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* p = new Node(x); 
    p->left = create();
    p->right = create();
    return p;
}

void preorder(struct Node* root) {
    if(!root) return;
    cout<<root->data<< " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void levelorder(Node* root) {
    if(root == NULL) return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    struct Node *root;
    root = create();

    preorder(root);
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
    levelorder(root);
    cout<<"\n";

   
    return 0;
}
