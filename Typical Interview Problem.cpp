#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,j,k,l,n,m,t;
    cin>>t;
    while(t--){
        cin>>k;
        string str;
        cin>>str;
        n=0;
        m=0;
        for(i=0;i<k;i++){
            if(str[i]=='B' && str[i-1]=='B' && i!=1){
                n=1;
            }
            if(i==0 && str[i]=='B'){
                n=1;
            }

        }
        if(n==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
