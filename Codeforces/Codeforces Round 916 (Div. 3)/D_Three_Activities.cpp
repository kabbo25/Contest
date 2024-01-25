#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector grid(3, vector(n, array{0, 0}));
    for (int i(0); i < 3; ++i)
    {
        for (int j(0); j < n; ++j)
        {
            int x;
            cin >> x;
            grid[i][j] = {x, j};
        }
        sort(grid[i].rbegin(), grid[i].rend());
    }
    int ans(0);
    for (int i(0); i < 3; ++i)
    {
        for (int j(0); j < 3; ++j)
        {
            for (int k(0); k < 3; ++k)
            {
                auto [x1, y1] = grid[0][i];
                auto [x2, y2] = grid[1][j];
                auto [x3, y3] = grid[2][k];
                if (y1 != y2 && y2 != y3 && y1 != y3)
                {
                    ans = max(ans, x1 + x2 + x3);
                }
            }
        }
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
}