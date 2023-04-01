#include<bits/stdc++.h>

using namespace std;

int main(){

    int a,b,c,d,m,n,k,l=2,i,j,t;
    cin>>t;

    while(t--){
        string str;
        cin>>n;
        cin>>str;

        if(str[0]=='1'){
           l=3;
        }
        for(i=1;i<n;i++){
            if(str[i]=='1' && l==3){
                cout<<"-";
                l=2;
            }
            else if(str[i]=='1' && l==2){
                cout<<"+";
                l=3;
            }
            else{
                cout<<"+";
            }
        }
        cout<<endl;
    }
    return 0;

}
