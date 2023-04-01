#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3
using namespace std;
int adj[100][100];
int color[100];
int node, edge;
int parent[100],dis[100];


void bfs(int startingNode){

    for(int i=0;i<node;i++){
        color[i]=WHITE;
        dis[i]=INT_MIN;
        parent[i]=-1;
    }
    dis[startingNode]=0;
    parent[startingNode]=-1;

    queue<int>q;
    q.push(startingNode);

    while(!q.empty()){
        int x;
        x=q.front();
        q.pop();
        color[x]=GRAY;
        cout<<x<<" ";
        for(int i=0;i<node;i++){
            if(adj[x][i]==1){
                if(color[i]==WHITE){
                    //x er neigbour i
                    //x is parent of i
                    parent[i]=x;
                    dis[i]=dis[x]+1;
                    q.push(i);
                }
            }
        }

        color[x]=BLACK;
    }

}

int main(){
    freopen("inputbfs.txt","r",stdin);
    cin>>node;
    cin>>edge;

    int n1,n2;

    for(int i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }

    bfs(0);
    cout<<endl<<parent[5]<<endl<<dis[6];

    return 0;
}


