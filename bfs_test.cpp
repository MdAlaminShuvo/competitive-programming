#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int adj[100][100];
int node,edge,i;
int parent[100],dis[100],color[100];

void bfs(int s){

    for(i=0;i<node;i++){
        color[i]=WHITE;
        parent[i]=-1;
        dis[i]=INT_MIN;
    }
    parent[s]=-1;
    dis[s]=0;
    queue<int>q;
    q.push(s);

    while(!q.empty()){
        int x;
        x=q.front();
        q.pop();
        color[x]=GRAY;
        cout<<x<<" ";
        for(i=0;i<node;i++){
            if(adj[x][i]==1){
                parent[i]=x;
                dis[i]=dis[x]+1;
                q.push(i);
            }
        }
        color[x]=BLACK;
    }

}



int main(){

    freopen("inputbfs.txt","r",stdin);
    cin>>node>>edge;

    int n1,n2;

    for(i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=2;
    }
    bfs(3);


}
