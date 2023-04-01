#include<bits/stdc++.h>
using namespace std;

vector<int>v[1000];
int dis[100000];
int vis[100000];
int in[10000],low[100000];
int timer;

void dfs(int node,int par){

    vis[node]=1;
    in[node]=timer;
    low[node]=timer;
    timer++;


    for(int child:v[node]){
        if(child==par){
            continue;

        }
        if(vis[child]==1){
            low[node]=min(low[node],in[child]);
        }
        else{
            dfs(child,node);
            if(low[child]>in[node]){
                cout<<node<<" -> "<<child<<endl;
            }
            low[node]=min(low[node],low[child]);
        }

    }

}

int main(){

    int t,j,k,l,i,n,m;
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,-1);

    return 0;
}


