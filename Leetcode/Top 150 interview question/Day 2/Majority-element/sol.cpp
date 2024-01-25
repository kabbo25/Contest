class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int cnt(0);
        for (int i(0); i < n; ++i)
        {
            if (i == 0 or nums[i] != nums[i - 1])
            {
                cnt = 1;
            }
            else
            {
                cnt++;
            }
            if (cnt > n / 2)
                return nums[i];
        }
        return -1;
    }
};