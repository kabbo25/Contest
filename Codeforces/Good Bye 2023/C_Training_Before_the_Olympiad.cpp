#include <bits/stdc++.h>
#include <iterator>
#include <numeric>
using namespace std;
#define int int64_t
void solve()
{

    int n;
    cin >> n;
    vector<int>v(n);
    for (auto &x : v)
        cin >> x;
    vector<int64_t> pre;
    partial_sum(v.begin(), v.end(), back_inserter(pre));
    int odd(0);
    for (int i(0); i < n; ++i)
    {
        odd += (v[i] & 1);
        if (i == 0)
            cout << pre[i] << " ";
        else
        {
            int bad = (odd / 3) + ((odd % 3) & 1);
            // cerr << i << " " << bad << endl;
            cout << pre[i] - bad << " ";
        }
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}