#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref,int new_data){

    struct Node* new_node = new Node;
    new_node->data=new_data;
    new_node->next=*head_ref;

    *head_ref = new_node;
}
int ar[10000];
void print(struct Node** head_ref){

    struct Node* temp=(*head_ref);
    int c=0;
    while(temp!=NULL){
        c++;
        ar[c]=temp->data;
        temp=temp->next;
    }
    c=c/2+1;
    cout<<ar[c]<<endl;
}

int main(){
    struct Node* head = NULL;

    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    push(&head,50);
    push(&head,60);
    push(&head,70);
    push(&head,80);


    print(&head);




}
