#include<bits/stdc++.h>
using namespace std;

struct ListNode{

    int data;
    struct ListNode* next;
};

void push(struct ListNode** head_ref,int new_data){

    struct ListNode* new_Node = new ListNode;

    new_Node->data=new_data;
    new_Node->next=*head_ref;

    *head_ref= new_Node;

}
bool print(struct ListNode** head_ref){

    struct ListNode* temp=*head_ref;
    int c=0;
    int ar[100000];
    while(temp!=NULL){
        ar[c++]=temp->data;
        temp=temp->next;
    }
    int k=c/2;
    for(int i=0;i<k;i++){
        if(ar[i]!=ar[c-i-1]){
            return false;
        }
    }

    return true;



}

int main(){
    int i,j,n,m,k,l;
    struct ListNode* head=NULL;

    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    push(&head,40);
    push(&head,30);
    push(&head,20);
    push(&head,10);

    if(print(&head)){
        cout<<"Is palindrome"<<endl;
    }
    else{
        cout<<"Not palindrom"<<endl;
    }

    return 0;
}

