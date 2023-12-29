#include <bits/stdc++.h>
#include <numeric>
using namespace std;
void solve()
{

    int n;
    cin >> n;
    vector v(n, 0);
    for (auto &x : v)
        cin >> x;
    int64_t ans = accumulate(v.begin(), v.end(), (int64_t)0);
    int64_t x = sqrtl(ans);
    if (x * x == ans)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
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