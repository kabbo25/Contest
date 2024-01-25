#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    // cout << t << endl;
    while (t--)
    {
        int ans(0);
        for (int i(0); i < 3; ++i)
        {
            int x;
            cin >> x;
            ans ^= x;
        }
        cout << ans << endl;
    }
}