#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        int mx = *max_element(nums.begin(), nums.end());
        // cerr<<mx<<endl;
        int n = nums.size();
        vector<int> prefix(n + 2, 0);
        for (int i(1); i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + (nums[i - 1] == mx);
        }
        long long ans(0);
        for (int i(0); i < n; ++i)
        {
            int l = i, r = n;
            while (r - l > 1)
            {
                int mid = (l + r) / 2;
                if (prefix[mid + 1] - prefix[i] < k)
                {
                    l = mid;
                }
                else
                {
                    r = mid;
                }
            }
            // cerr<<l<<" "<<i<<endl;
            ans += (n - i);
            if (l == i and k == 1 and nums[i] == mx)
                continue;
            ans -= (l - i + 1);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {28, 5, 58, 91, 24, 91, 53, 9, 48, 85, 16, 70, 91, 91, 47, 91, 61, 4, 54, 61, 4};
    int k = 1;
    cout << s.countSubarrays(nums, k);
    return 0;
}