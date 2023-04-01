#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int n){
        data = n;
        left = NULL;
        right = NULL;
    }

};
void insertN(Node *node, int n){
    if(n<node->data){
        if(node->left==NULL){
            node->left = new Node(n);
        }
        else{
            insertN(node->left,n);
        }
    }

    if(n>node->data){
        if(node->right==NULL){
            node->right = new Node(n);
        }
        else{
            insertN(node->right,n);
        }
    }
    return;
}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main(){

    int n,x,i,j,k,l;
    Node *root = NULL;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        if(root==NULL){
            root = new Node(x);
        }
        else{
            insertN(root,x);
        }
    }
    cout<<"inorder"<<endl;
    inorder(root);

}
