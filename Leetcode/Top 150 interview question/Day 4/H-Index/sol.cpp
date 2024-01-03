class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        int n = citations.size();
        int l(0), r(n + 1);
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            int cnt(0);
            for (int i(0); i < n; ++i)
            {
                cnt += citations[i] >= mid;
            }
            if (cnt >= mid)
                l = mid;
            else
                r = mid;
        }
        return l;
    }
};