#include<bits/stdc++.h>
using namespace std;


int main(){

    int i,j,k,l,t,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        string str;
        cin>>str;
        int cnt=1;
        for(i=1;i<n;i++){
           if(str[i]==str[i-1]){
                cnt++;
           }
           else{
                l=cnt;
                cnt=1;
           }
        }
        cout<<l<<endl;
    }
    return 0;
}
