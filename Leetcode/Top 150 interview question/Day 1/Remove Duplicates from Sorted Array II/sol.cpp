#include <vector>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int idx(0),cnt(0);
        for(int i(0);i<n;++i){
            if(i==0 or nums[i]!=nums[i-1]){
                nums[idx++]=nums[i];
                cnt=1;
            }
            else if(cnt<2){
                nums[idx++]=nums[i];
                cnt++;
            }
        } 
    }
};