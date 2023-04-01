#include<bits/stdc++.h>
using namespace std;

int minimizeSum(int N, vector<int> arr) {
        priority_queue<int, vector<int>, greater<int> > pq;

        // code here
        int c=0,i,j,k,l,sum=0;
        for(i=0;i<N;i++){
            pq.push(arr[i]);
        }
        while(pq.size()>1){
           int firstMin = pq.top();
           pq.pop();
           int secondMin = pq.top();
           pq.pop();
           sum = sum + (firstMin + secondMin);
           pq.push(firstMin+secondMin);
           //cout<<"min= "<<firstMin<<" second= "<<secondMin<<" sum= "<<sum<<endl;
        }
        return sum;
    }

int main(){

    int i,j,k,l,n,m,c;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }

    int tr=minimizeSum(n,v);
    cout<<tr<<endl;

    return 0;
}

