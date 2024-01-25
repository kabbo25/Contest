#include <algorithm>
#include <array>
#include <bits/stdc++.h>
#include <cassert>
#include <iterator>
using namespace std;
const int mod1 = 764285933, mod2 = 147043433;
const int base1 = 211, base2 = 389;
template <class Fun>
class y_combinator_result
{
    Fun fun_;

public:
    template <class T>
    explicit y_combinator_result(T &&fun) : fun_(std::forward<T>(fun)) {}

    template <class... Args>
    decltype(auto) operator()(Args &&...args)
    {
        return fun_(std::ref(*this), std::forward<Args>(args)...);
    }
};

template <class Fun>
decltype(auto) y_combinator(Fun &&fun)
{
    return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
}
// const int mod = 1e9 + 7;
using u64 = uint64_t;
using u128 = __uint128_t;
#define sc1(x) scanf("%lld", &(x));
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifndef NEAL_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
/*Well, probably you won't understand anything,
because you didn't try to understand anything in your life,
you expect all hard work to be done for you by someone else.
Let's start*/
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    map<int, int> mp;
    for (auto &x : v)
    {
        cin >> x;
        mp[x]++;
    }
    vector res(0, 0), bad(0, 0);
    int curse(0);
    int64_t prefix_sum(0);
    for (auto &[a, b] : mp)
    {
        if (prefix_sum < a)
        {
            res.emplace_back(a);
            prefix_sum += a;
        }
        else
        {
            bad.emplace_back(a);
        }
        b--;
    }
    for (auto [a, b] : mp)
    {
        for (int i(0); i < b; ++i)
            bad.emplace_back(a);
    }
    curse = n - res.size();
    for (auto &x : bad)
        res.emplace_back(x);
    cout << curse << endl;
    for (int i : res)
        cout << i << " ";
    cout << endl;
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