#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temps(m,0);
        for(int i=0;i<m;i++){
            temps[i]=nums1[i];
        }
        int i(0),j(0);
        while(i<m or j<n){
            if(j>=n){
                nums1[i+j]=temps[i++];
                continue;
            }
            if(i>=m){
                nums1[i+j]=nums2[j++];
                continue;
            }
            if(temps[i]<nums2[j]){
                nums1[i+j]=temps[i++];
            }
            else{
                nums1[i+j]=nums2[j++];
            }
        }
    }
};

int main(){
    Solution s;
    vector<int>nums1={1,2,3,0,0,0};
    vector<int>nums2={2,5,6};
    s.merge(nums1,3,nums2,3);
}