#include<bits/stdc++.h>
using namespace std;
vector<int>v[10000];
int vis[10000];
int dis[10000];

void dfs(int node,int d){

    vis[node]=1;
    dis[node]=d;
    for(int i=0;i<v[node].size();i++){
        int child=v[node][i];
        if(vis[child]==0){
            dfs(child,d+1);
        }
    }

}

int main(){
    int n,m,e,i;
    cin>>n>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int a;
    cin>>a;
    dfs(a,0);
    for(i=1;i<=n;i++){
        cout<<a<<" -> "<<i<<" = "<<dis[i]<<endl;
    }
    return 0;

}
