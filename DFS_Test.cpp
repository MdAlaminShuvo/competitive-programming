#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int node,edge,i;
int adj[100][100],color[100];
int Time=1;
int stime[100],fTime[100];

void dfs_vis(int x){

    color[x]=GRAY;
    stime[x]=Time;
    Time++;

    for(i=0;i<node;i++){
        if(adj[x][i]==1){
            if(color[i]==WHITE){

                dfs_vis(i);

            }
        }
    }
    color[x]=BLACK;
    fTime[x]=Time;
    Time++;
}


void dfs(){
    for(i=0;i<node;i++){
        color[i]=WHITE;
    }
    for(int j=0;j<node;j++){
        if(color[j]==WHITE){

            dfs_vis(j);
        }
    }

}



int main(){
    int n1,n2;
    freopen("input.txt","r",stdin);
    cin>>node>>edge;

    for(i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    dfs();
    for(i=0;i<node;i++){
        cout<<"Node: "<<(char)('A'+1)<<" "<<stime[i]<<" "<<fTime[i]<<endl;
    }



}
