#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector v(n + 1, 0);
    for (int i(1); i <= n; ++i)
        cin >> v[i];
    int64_t odd_sum(0), even_sum(0);
    map<int64_t, int> mp;
    mp[0]++;
    for (int i(1); i <= n; ++i)
    {
        if (i & 1)
            odd_sum += v[i];
        else
            even_sum += v[i];
        if (mp.count(odd_sum - even_sum))
        {
            cout << "YES" << endl;
            return;
        }
        mp[odd_sum - even_sum]++;
    }
    cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i(0); i < t; ++i)
        solve();
}