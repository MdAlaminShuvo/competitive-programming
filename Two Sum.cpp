#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    int i,j,n,m;
    n=nums.size();
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            m=nums[i]+nums[j];
            if(m==target && i!=j){
                vector<int>r(2);
                r[0]=i;
                r[1]=j;
                return r;
            }
        }
    }


}

int main(){

    int i,j,k,l,n,m,c;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    cin>>m;
    vector<int>tr(2);
    tr=twoSum(v,m);
    cout<<"["<<tr[0]<<","<<tr[1]<<"]"<<endl;

    return 0;
}
