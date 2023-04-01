#include<bits/stdc++.h>

using namespace std;
int adj[100][100];

int main(){
    freopen("input.txt","r",stdin);

    int node, edge;
    cout<<"Enter the number of nodes: ";
    cin>>node;
    cout<<"Enter the number of edges: ";
    cin>>edge;

    int n1,n2;

    for(int i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;


    }
    cout<<endl;
    for(int i=0;i<node;i++){
        if(adj[1][i]==1){
            cout<<i<<" ";
        }
    }



    return 0;
}

