#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,j,k,l,n,m,e,o,w,t;
    cin>>t;
    while(t--){
        cin>>n;
        string str;
        cin>>str;
        m=0;
        e=0;
        o=0;
        w=0;
        for(i=0;i<n;i++){
           if(i==0){
                if(str[i]=='m' || str[i]=='M'){
                    m=1;
                }
           }
           else if(m==1 && (str[i]=='m' || str[i]=='M') && e==0 && o==0 && w==0){
                m=1;
           }
           else if(m==1 && (str[i]=='e' || str[i]=='E') && o==0 && w==0){
                e=1;
           }
           else if(e==1 && (str[i]=='o' || str[i]=='O') && m==1 && w==0){
                o=1;
           }
           else if(o==1 && (str[i]=='w' || str[i]=='W') && m==1 && e==1){
                w=1;
           }
           else{
                m=0;
           }
        }

        if(m==1 && e==1 && o==1 && w==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

