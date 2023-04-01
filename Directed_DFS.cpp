#include<bits/stdc++.h>

using namespace std;

vector<int>v[100000];
int vis[100000];
booldfs(int node){
    vis[node]=1;

    for(int i=0;i<v[node].size();i++){
        int child=v[node][i];
        if(vis[child]==0){
            if(dfs(child)==true)return true;
        }
        else{
            if(vis[child]==1)return true;
        }
    }
    vis[node]=2;
    return false;
}

int main(){
    int i,j,k,l,n,m,a,b,c;

    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);

    }
    bool ans = dfs(1);
    if(ans=true)cout<<"Cycle Found"<<endl;
    else cout<<"NOT cycle Found"<<endl;

    return 0;
}
