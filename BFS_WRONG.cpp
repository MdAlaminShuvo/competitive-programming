#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int dis[100000];
int vis[100000];

void bfs(int node){
    queue<int>q;
    q.push(node);
    vis[node]=1;
    dis[node]=0;
    while(!q.empty()){
        int cur =q.front();
        q.pop();
        for(int child: v[cur]){
            if(vis[child]==0){
                dis[child]=dis[cur]+1;
                vis[child]=1;
                q.push[child];
            }
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
    bfs(1);
    for(i=1;i<=n;i++){
        cout<<"Distance of node "<<i<<" = "<<dis[i]<<endl;
    }
    return 0;
}


