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
    int i,j,k,l,n,m;
    cin>>n;
    for(i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    dfs(1,0);
    int q;
    cin>>q;
    int ans=-1;
    int mn=INT_MAX;
    while(q--){
        int x;
        cin>>x;
        if(dis[x]<mn){
            mn=dis[x];
            ans=x;
        }
        else if(dis[x]==mn){
            ans=min(ans,x);
        }
    }
    cout<<ans<<endl;
    return 0;
}
