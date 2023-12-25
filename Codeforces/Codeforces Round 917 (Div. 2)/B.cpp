#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    set<char> st;
    for (int i(0); i < n; ++i)
    {
        if (st.count(s[i]))
            continue;
        ans += (n - i);
        st.insert(s[i]);
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