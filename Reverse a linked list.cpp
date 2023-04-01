#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head =NULL;

void push(int new_data){

    if(head==NULL){
        head = new Node();
        head->data=new_data;
        head->next= NULL;
    }
    else{
        Node* current_node = head;

        while(current_node->next!=NULL){
            current_node=current_node->next;
        }

        Node* newnode = new Node();
        newnode->data = new_data;
        newnode->next=NULL;
        current_node->next=newnode;
    }


}

void print(){

    Node* current_node = head;

    while(current_node!=NULL){
        cout<<current_node->data<<" ";
        current_node=current_node->next;
    }


}
void reverse_node(){

    Node* current_node = head;
    int ar[100000]={0};
    int c=0;
    while(current_node!=NULL){
        ar[c++]=current_node->data;
        current_node=current_node->next;
    }
    Node* temp = head;
    int i=c-1;
    while(temp!=NULL){
        temp->data=ar[i--];
        temp=temp->next;
    }
}

int main(){

    int i,j,k,l,n,m,a;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        push(a);
    }


    print();

    reverse_node();
    cout<<endl;
    print();




}

