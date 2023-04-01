#include<bits/stdc++.h>
using namespace std;


int main(){

    int t,j,k,l,i,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        n--;
        string s;
        cin>>s;
        cout<<"1 ";
        int st=0;
        for(i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                st=i;
            }
            cout<<st+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
