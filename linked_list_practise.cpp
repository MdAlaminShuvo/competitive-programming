#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;

};

void push(struct Node** head_ref, int new_data){
    struct Node* new_node = new Node;

    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;

}

void print(struct Node** head_ref){
    struct Node* temp;
    temp = (*head_ref);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int main(){

    struct Node* head=NULL;

    push(&head,20);
    push(&head,4);
    push(&head,30);
    push(&head,15);
    push(&head,10);

    print(&head);



}
