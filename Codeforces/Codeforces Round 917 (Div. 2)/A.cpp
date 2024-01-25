#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector v(n, 0);
    int cnt(0);
    bool zero(false);
    for (auto &x : v)
    {
        cin >> x;
        if (x == 0)
            zero = true;
        if (x < 0)
            cnt++;
    }
    if (zero or (cnt & 1))
    {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    cout << 1 << " " << 0 << endl;
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