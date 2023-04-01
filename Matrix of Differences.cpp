#include<bits/stdc++.h>
using namespace std;
int n;
int fun(int x){
    if(x%2==1)
        return x/2+1;
    else
        return n*n-(x/2)+1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i%2==1)
                    printf("%d ",fun((i-1)*n+j));
                else
                    printf("%d ",fun((i-1)*n+(n+1-j)));
            }
            printf("\n");
        }
    }
    return 0;
}
