#include <bits/stdc++.h>
using namespace std;
void solve()
{

    for (int i(0); i < 3; ++i)
    {
        char ch;
        vector cnt(3, 0);
        for (int j(0); j < 3; ++j)
        {
            cin >> ch;
            if (ch == '?')
                continue;
            cnt[ch - 'A']++;
        }
        for (int k(0); k < 3; ++k)
        {
            if (cnt[k])
                continue;
            cout << char('A' + k) << endl;
        }
    }
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