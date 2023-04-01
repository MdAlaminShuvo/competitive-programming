#include<bits/stdc++.h>

using namespace std;


int main(){

    queue<int>q;
    int i,x;
    for(i=0;i<10;i++){
        q.push(i*i);
    }
    while(!q.empty()){
        x=q.front();
        cout<<x<<" ";
        q.pop();

    }


    return 0;
}
