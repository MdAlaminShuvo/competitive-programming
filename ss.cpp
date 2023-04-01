#include<bits/stdc++.h>
using namespace std;



int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i,j,l,k,n,m;
        n=nums1.size();
        m=nums2.size();
        l=min(n,m);
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());


        i = 0;
        for ( k = 0; k < n; k++) {
            if (i < m - 1 && nums2[i] < nums1[k])
                i += 1;
            if (nums1[k] == nums2[i])
                return nums1[k];
        }
        return -1;

    }
int main(){

    int i,j,k,l,n,m,c;
    cin>>n;
    vector<int>nums1;
    vector<int>nums2;
    for(i=0;i<n;i++){
        cin>>k;
        nums1.push_back(k);
    }
    for(i=0;i<n;i++){
        cin>>k;
        nums2.push_back(k);
    }

    int tr=getCommon(nums1,nums2);
    cout<<tr<<endl;

    return 0;
}

void leftViewUtil(struct node *root,int level,int *max_level){
    if(root==NULL) return;
    if(*max_level < level){
        printf("%d\t",root->data);
        *max_level = level;
    }
    leftViewUtil(root->left, level+1,max_level);
    leftViewUtil(root->right, level+1,max_level);

}
void leftView(struct node *root){
    int max_level =0;
    leftViewUtil(root,1,&max_level);

}















