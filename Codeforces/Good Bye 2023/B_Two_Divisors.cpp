#include <bits/stdc++.h>
#include <numeric>
using namespace std;
void solve()
{

    int64_t a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    int64_t ans = a * b / gcd(a, b);
    if (ans == b)
    {
        ans *= (b / a);
    }
    cout << ans << endl;
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