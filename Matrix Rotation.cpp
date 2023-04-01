#include<bits/stdc++.h>
using namespace std;


int main(){

    int a,b,t,j,k,i;
    cin>>t;
    while(t--){
        int p1=0,p2=0,p3=0,p4=0,l=0,s=101,cl=0,cs=0,ar[6];
        cin>>p1>>p2>>p3>>p4;
        s=min(p1,p2);
        s=min(s,p3);
        s=min(s,p4);
        l=max(p1,p2);
        l=max(l,p3);
        l=max(l,p4);
        if((s==p1 && l==p4)||(l==p1 && s==p4)||(s==p2 && l==p3)||(l==p2 && s==p3)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }



    }
    return 0;
}

