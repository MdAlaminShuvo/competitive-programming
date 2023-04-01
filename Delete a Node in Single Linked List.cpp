#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};
Node* head=NULL;

void push(int a){

    if(head==NULL){
        head = new Node();
        head->data=a;
        head->next=NULL;
    }
    else{
        Node* currentnode = head;

        while(currentnode->next!=NULL){
            currentnode=currentnode->next;
        }

        Node* newnode = new Node();
        newnode->data=a;
        newnode->next=NULL;
        currentnode->next=newnode;


    }
}

void print(){
    Node* currentnode = head;
    while(currentnode!=NULL){
        cout<<currentnode->data<<" ";
        currentnode=currentnode->next;
    }

}

void deletenode(int x){

    int c=1;
    Node* current_node = head;
    Node* previous_node = NULL;

    while(c!=x){
        previous_node = current_node;
        current_node = current_node->next;
        c++;
    }
    if(current_node==head){
        head=current_node->next;
    }
    else{
        previous_node->next=current_node->next;
    }
    delete(current_node);
}

int main(){

    int a,b,i,j,k,l,n,m;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        push(a);
    }
    print();

    cin>>k;
    deletenode(k);
    cout<<endl;
    print();


}
