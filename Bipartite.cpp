#include<bits/stdc++.h>
using namespace std;

vector<int>v[10000];
int vis[10000];
int ar[10000],col[1000];
bool dfs(int node, int c){
    ar[node]=1;
    col[node]=c;
    for(int i=0;i<v[node].size();i++){
        int child = v[node][i];
        if(ar[child]==0){
           if(dfs(child,c^1)==false)return false;
        }
        else{
            if(col[node]==col[child])return false;
        }

    }
    return true;
}



int main(){

    int i,j,k,e,l,n,m,t;
    cin>>t;
    for(j=1;j<=t;j++){
        memset(ar,0,sizeof(ar));
        memset(col,0,sizeof(col));
        for(l=1;l<=n;l++)v[l].clear();
        cin>>n>>e;
        while(e--){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);

        }
        bool ans;
        for(i=1;i<=n;i++){
            if(ar[i]==0){
                ans=dfs(i,1);
            }
            if(ans==false)break;
        }
        cout<<"Scenario #"<<j<<":"<<endl;
        if(ans==true)cout<<"No suspicious bugs found!"<<endl;
        else cout<<"Suspicious bugs found!"<<endl;
    }
    return 0;
}
