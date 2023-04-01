#include<bits/stdc++.h>
using namespace std;
int lis[100000];


struct ListNode{

    int data;
    struct ListNode* next;

};

void push(struct ListNode** head_ref,int new_data){

    struct ListNode* new_Node = new ListNode;
    new_Node->data=new_data;
    new_Node->next=*head_ref;

    *head_ref=new_Node;
}
int ar[100000];
int print(struct ListNode** head_ref){
    struct ListNode* temp = *head_ref;
    int c=0;
    while(temp!=NULL){
        ar[c++]=temp->data;
        //cout<<temp->data<<" ";
        temp=temp->next;
    }
    int cnt=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<c;j++){
            if(ar[j]==lis[i]){
                ar[j]=-1;
                if((ar[j-1]!=-1 && j>0) && ar[j+1]!=-1){
                    cnt++;
                }
            }
        }
    }
    return cnt;
}


int main(){

    struct ListNode* head=NULL;

    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,15);
    push(&head,50);
    push(&head,78);
    push(&head,88);
    push(&head,98);

    lis[0]=10;
    lis[1]=50;
    lis[2]=30;
    lis[3]=88;
    int l = print(&head);
    cout<<l<<endl;

}
