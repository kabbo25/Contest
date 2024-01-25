class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &v)
    {
        int n = v.size();
        vector ans(n, 0);
        int product = 1, suf_product = 1;
        for (int i(0); i < n; ++i)
        {
            ans[i] = product;
            product *= v[i];
        }
        for (int i(n - 1); i >= 0; --i)
        {
            ans[i] *= suf_product;
            suf_product *= v[i];
        }
        return ans;
    }
};