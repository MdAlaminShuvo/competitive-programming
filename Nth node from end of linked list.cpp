#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    struct Node* next;

};
struct Node* current=NULL;
int c=0;

void push(struct Node** ref_head,int new_data){

    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next=(*ref_head);
    (*ref_head)=new_node;
}

void print(struct Node** ref_node){
    struct Node* temp = (*ref_node);

    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getNthFromLast(Node *head, int n)
{
    struct Node* temp = head;
    int cnt=0;
    while(temp!=NULL){
         temp=temp->next;
        cnt++;

    }
    int s=cnt-n;
    if(s<0){
        s=-1;
    }
    else{
        temp=head;
        int i=0;
        while(i!=s){
            temp=temp->next;
            i++;
        }
        s=temp->data;
    }
    return s;
}


int main(){

    struct Node* head=NULL;
    push(&head,10);
    push(&head,20);
    push(&head,25);
    push(&head,30);
    push(&head,40);
    push(&head,50);


    print(&head);
    int a=getNthFromLast(head,2);
    cout<<endl<<a<<endl;


}
