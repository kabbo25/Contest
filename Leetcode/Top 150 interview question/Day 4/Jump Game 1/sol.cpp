class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int max_jump(0);
        for (int i(0); i < (int)nums.size(); ++i)
        {
            if (max_jump < i)
                break;
            max_jump = max(max_jump, i + nums[i]);
        }
        return max_jump + 1 >= nums.size();
    }
};