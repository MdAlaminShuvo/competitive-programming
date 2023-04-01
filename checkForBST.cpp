#include<bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }


};


//check for BST
bool isBST(Node* root, Node* Min=NULL, Node* Max=NULL){
    if(root == NULL){
        return true;
    }
    if(Min != NULL && root->data <= Min->data){
        return false;
    }

    if(Max != NULL && root->data >= Max->data){
        return false;
    }
    bool leftValid = isBST(root->left,Min,root);
    bool rightValid = isBST(root->right, root,Max);
    return leftValid and rightValid;

}


int main(){
   Node* root1 = new Node(5);
   root1->left = new Node(6);
   root1->right = new Node(9);

   if(isBST(root1,NULL,NULL)){
        cout<<"Valid BST"<<endl;
   }
   else{
        cout<<"InValid BST"<<endl;
   }

   Node* root2 = new Node(5);
   root2->left = new Node(2);
   root2->right = new Node(8);

   if(isBST(root2,NULL,NULL)){
        cout<<"Valid BST"<<endl;
   }
   else{
        cout<<"InValid BST"<<endl;
   }

    return 0;
}

