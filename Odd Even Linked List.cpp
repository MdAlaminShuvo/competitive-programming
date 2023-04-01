#include<bits/stdc++.h>
using namespace std;

struct ListNode{

    int data;
    struct ListNode* next;
};

void push(struct ListNode** head_ref, int new_data){
    struct ListNode* new_node = new ListNode;

    new_node->data=new_data;
    new_node->next=(*head_ref);

    (*head_ref) = new_node;
}

void print(struct ListNode** head_ref){

    struct ListNode* temp=(*head_ref);
    int c=0;
    while(temp!=NULL){
        c++;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

    struct ListNode* head = NULL;

    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);

    print(&head);

}
