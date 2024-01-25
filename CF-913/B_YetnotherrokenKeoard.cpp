#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    vector ache(0, 0), ache1(0, 0);
    set<int> rmv, rmv1;
    for (int i(0); i < (int)s.size(); ++i)
    {
        if (s[i] == 'B' or s[i] == 'b')
        {
            if (isupper(s[i]))
            {
                if (ache.empty())
                    continue;
                rmv.emplace(ache.back());
                ache.pop_back();
            }
            else
            {
                if (ache1.empty())
                    continue;
                rmv1.emplace(ache1.back());
                ache1.pop_back();
            }
            continue;
        }
        if (isupper(s[i]))
        {
            ache.emplace_back(i);
        }
        else
        {
            ache1.emplace_back(i);
        }
    }
    string res;
    for (int i(0); i < (int)s.size(); ++i)
    {
        if (rmv.count(i) or rmv1.count(i))
            continue;
        if(tolower(s[i])=='b')continue;
        res += s[i];
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
}