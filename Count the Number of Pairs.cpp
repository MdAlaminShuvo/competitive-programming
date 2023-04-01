#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,j,k,l,n,m,e,o,w,t,c;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string str;
        int low[26]={0};
        int high[26]={0};
        c=0;
        cin>>str;
        for(i=0;i<n;i++){
            if(str[i]>='a' && str[i]<='z'){
                l=str[i]-'a';
                low[l]++;
            }
            else{
                l=str[i]-'A';
                high[l]++;
            }
        }
        int lw=0,hw=0;
        for(i=0;i<26;i++){
            l=min(low[i],high[i]);
            c=c+l;

            low[i]=low[i]-l;
            high[i]=high[i]-l;

            lw=low[i]/2+lw;
            hw=high[i]/2+hw;
        }
        lw=lw+hw;
        l=min(lw,k);


        c=c+l;
        cout<<c<<endl;
    }
    return 0;
}


