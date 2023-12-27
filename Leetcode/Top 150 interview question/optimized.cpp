class Solution {
public:
    int majorityElement(vector<int>& nums) {
        


        int count = 0;
        int candidate;
        int n = nums.size();
        for(int i=0;i<n;i++){

            if(count ==0){
                candidate = nums[i];
                count = count + 1;
            }
            else if(candidate == nums[i]){
                count = count + 1;
            }
            else{
                count = count - 1;
            }
        }

        return candidate;
    }
};