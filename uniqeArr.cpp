#include<bits/stdc++.h>
using namespace std;
int a[1000000005];

int main(){
    int i,j,k, l,N,m;
    cin>>N;
    int arr[N+5];
    for( i=0;i<N;i++){
            cin>>arr[i];
            a[arr[i]]++;
        }

        m=*max_element(arr,arr+N);

        int c=0;
        for( i=0;i<=m;i++){
            if(a[i]>1){
                while(a[i]>1){
                    for( j=i;j<N+m;j++){
                        if(a[j]==0){
                            c=c+j-i;
                            //cout<<"c="<<c<<" a[i]="<<a[i]<<endl;
                            //cout<<"c="<<c<<"j="<<j<<endl;
                            a[j]=1;
                            break;
                        }
                    }
                    a[i]--;
            }
            }
        }
        cout<<c<<endl;

}
