
#include<bits/stdc++.h>

using namespace std;


int main(){

    int i,j,l,t,n,m,k,a,x,w;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        vector<int>v;
        for(i=0;i<m;i++){
            cin>>a;
            v.push_back(a);
        }
        if(n%k==0){
            w=n/k;
            l=k;
        }
        else{
            w=n/k+1;
            l=n%k;
        }
        for(i=0;i<m;i++){
            if(v[i]>w){
                l=-1;
            }
            else if(v[i]==w){
                l--;
            }
        }
        if(l<0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}




















