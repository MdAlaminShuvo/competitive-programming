#include<bits/stdc++.h>

using namespace std;

struct Node{

    int data;
    struct Node* next;
};

Node* root=NULL;

void push(int a){

    if(root==NULL){ //When empty linked list
        root = new Node();
        root->data=a;
        root->next=NULL;
    }
    else{
        Node* current = root;
        while(current->next!=NULL){
            current=current->next;
        }

        Node* newNode = new Node();
        newNode->data=a;
        newNode->next=NULL;
        current->next=newNode;


    }
}

void print(){

    Node* current_node = root;
    while(current_node!=NULL){
        cout<<current_node->data<<" ";
        current_node=current_node->next;

    }
}

void delete_Node(int d){
    Node* current_node = root;
    Node* previous_node = root;

    while(current_node->data!=d){
        previous_node = current_node;
        current_node=current_node->next;
    }
    if(current_node==root){
        root=current_node->next;
    }
    else{
        previous_node->next=current_node->next;
    }
    delete(current_node);
}
void added(int n,int a){
     Node* current_node = root;
     Node* newnode = new Node();

     while(current_node->data!=n){
        current_node=current_node->next;
     }

     newnode->data=a;
     newnode->next=current_node->next;
     current_node->next=newnode;

}

int main(){
    int i,j,k,l,n,m,d,a;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m;
        push(m);
    }

    print();

    cout<<endl<<"Enter the delete node: ";
    cin>>d;
    delete_Node(d);
    cout<<"After delete Node"<<endl;
    print();

    cout<<endl<<"Enter the added node: ";
    cin>>d>>a;
    added(d,a);
    cout<<"After added Node"<<endl;
    print();

}
