#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3
using namespace std;
int adj[100][100];
int color[100];
int node, edge;

void dfs_vis(int x){
    color[x]=GRAY;
    for(int i=0;i<node;i++){
        if(adj[x][i]==1){
            if(color[i]==WHITE){
                dfs_vis(i);
            }
        }
    }
    color[x]=BLACK;
}
void dfs(){

    for(int i=0;i<node;i++){
        color[i]=WHITE;
    }
    for(int i=0;i<node;i++){
        if(color[i]==WHITE){
            dfs_vis(i);
        }
    }
}

int main(){
    freopen("input.txt","r",stdin);
    //cout<<"Enter the number of nodes: ";
    cin>>node;
    //cout<<"Enter the number of edges: ";
    cin>>edge;

    int n1,n2;

    for(int i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;


    }
    dfs();



    return 0;
}

