#include<bits/stdc++.h>
using namespace std;
int a[10000000];

int main(){
    int i,j,k, l,N,m;
    cin>>N;
    int nums[N+5];
    for( i=0;i<N;i++){
            cin>>nums[i];
            a[nums[i]]++;
    }


        int maxVal = 0;
        for (int x : nums) {
            maxVal = max(maxVal, x);
        }

        int count1[] = {0};
        for (int x : nums) {
            count1[x]++;
        }

        int moves = 0;
        int taken = 0;
        for (int x = 0; x < N + maxVal; ++x) {
            if (count1[x] >= 2) {
                taken += count1[x] - 1;
                moves -= x * (count1[x] - 1);
            } else if (taken > 0 && count1[x] == 0) {
                taken--;
                moves += x;
            }
        }

        cout<<moves;

    return 0;
}
