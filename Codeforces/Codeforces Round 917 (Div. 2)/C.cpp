#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    vector days(n, 0);
    for (auto &x : days)
        cin >> x;
    vector v(m, 0);
    for (auto &x : v)
        cin >> x;
    int64_t cnt(0);
    for (int i(0); i < n; ++i)
    {
        if (days[i] == (i + 1))
            cnt++;
    }
    auto temp = days;
    int64_t ans = cnt + (d - 1) / 2;
    for (int i(0); i < min(3 * n, d - 1); ++i)
    {
        auto change = v[i % m];
        // cerr<<change<<" "<<i<<endl;
        cnt = 0;
        for (int j(0); j < change; ++j)
        {
            days[j]++;
        }
        for (int k(0); k < n; ++k)
            cnt += (days[k] == (k + 1));
        ans = max(ans, cnt + (d - (i + 2)) / 2);
    }
    cout << ans << endl;
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