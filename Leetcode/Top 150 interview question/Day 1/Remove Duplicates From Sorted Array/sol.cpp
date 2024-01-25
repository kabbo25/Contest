class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx(0);
        for(int i(0);i<(int)nums.size();++i){
            if(i==0){
                nums[idx++]=nums[i];
            }
            else{
                if(nums[i]!=nums[i-1])
                    nums[idx++]=nums[i];
            }
        }
        return idx;
    }
};