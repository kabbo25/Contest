#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int suf_max(0), ans(0);
        for (int i(n - 1); i >= 0; --i)
        {
            if (i + 1 < n)
                ans = max(ans, suf_max - prices[i]);
            suf_max = max(suf_max, prices[i]);
        }
        return ans;
    }
};