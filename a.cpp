#include<bits/stdc++.h>
using namespace std;

vector<int>v[1000];
int dis[100000];
int vis[100000];
int in[10000],low[100000];
int timer;


int main(){

    int t,j,k,l,i,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n+5];
        int c=1;
        for(i=0;i<n;i++){
            cin>>ar[i];
            if(i!=0 && ar[i]==ar[i-1]){
                c++;
            }
        }
        sort(ar,ar+n);

        if(c==n){
            cout<<"NO"<<endl;
        }
        else{
            k=n/2;
            l=0;
            cout<<"YES"<<endl;
            if(n%2==0){
                for(i=n-1;i>=k;i--){
                        cout<<ar[i]<<" "<<ar[l++]<<" ";
                }
            }
            else{
                for(i=n-1;i>k;i--){
                        cout<<ar[i]<<" "<<ar[l++]<<" ";
                }
                cout<<ar[k];
            }
            cout<<endl;
        }

    }



    return 0;
}


