#include <bits/stdc++.h>
using namespace std;
template <typename T, typename AssociativeOperation, typename InverseOperation = std::nullptr_t>
struct binary_indexed_tree
{
    int SZ;
    T identity;
    AssociativeOperation TT;
    InverseOperation S;
    std::vector<T> data;

    binary_indexed_tree() {}

    binary_indexed_tree(int _SZ, T _identity, AssociativeOperation _TT, InverseOperation _S = nullptr)
        : SZ(_SZ), identity(_identity), TT(_TT), S(_S)
    {
        data.assign(2 * SZ, identity);
    }

    // Replaces the current value at index i with TT(current value, v)
    void add(int i, T v)
    {
        for (i++; i <= SZ; i += i & -i)
            data[i] = TT(data[i], v);
    }

    // Replaces the element at index i with v. Requires InverseOperation to be defined.
    void replace(int i, T v)
    {
        static_assert(!std::is_same<decltype(S), std::nullptr_t>::value, "InverseOperation not defined.");
        add(i, S(v, get(i)));
    }

    // Returns the value at index i. Requires InverseOperation to be defined.
    T get(int i) const
    {
        static_assert(!std::is_same<decltype(S), std::nullptr_t>::value, "InverseOperation not defined.");
        return accumulate(i, i + 1);
    }

    // Returns the result of accumulating the elements at indices in [0, len)
    T accumulate_prefix(int len) const
    {
        assert(0 <= len && len <= SZ);
        T res = identity;
        for (; len; len -= len & -len)
            res = TT(res, data[len]);
        return res;
    }

    // Returns the result of accumulating the elements at indices in [l, r). Requires InverseOperation be defined.
    T accumulate(int l, int r) const
    {
        static_assert(!std::is_same<decltype(S), std::nullptr_t>::value, "InverseOperation not defined.");
        return l > r ? identity : S(accumulate_prefix(r), accumulate_prefix(l));
    }

    /* Returns the smallest len in [0, S] such that p(accumulate_prefix(len)) returns true.
     * Returns S + 1 if no such len exists.
     * Requires that p(accumulate_prefix(len)) is non-decreasing in len.
     */
    template <typename Predicate>
    int binary_search(Predicate p) const
    {
        if (p(identity))
            return 0;

        int len = 0;
        T accumulator = identity;

        for (int bit = 31 - __builtin_clz(SZ); bit >= 0; bit--)
        {
            int next = len + (1 << bit);
            if (next > SZ)
                continue;

            T combined = TT(accumulator, data[next]);
            if (!p(combined))
            {
                len = next;
                accumulator = combined;
            }
        }

        return len + 1;
    }
};
void solve()
{
    int n;
    cin >> n;
    vector<array<int, 2>> points(n);
    vector temp(0, 0);
    for (auto &[a, b] : points)
    {
        cin >> a >> b;
        temp.emplace_back(a);
        temp.emplace_back(b);
    }
    sort(points.begin(), points.end());
    sort(temp.begin(), temp.end());
    map<int, int> mp;
    int cnt(0);
    for (auto a : temp)
    {
        mp[a] = cnt++;
    }
    binary_indexed_tree<int64_t, std::plus<int64_t>, std::minus<int64_t>> bit(cnt + 1, 0, std::plus<int64_t>(), std::minus<int64_t>());

    int64_t ans(0);
    for (int i(n - 1); i >= 0; --i)
    {
        int ache = mp[points[i][1]] + 1;
        ans += bit.accumulate(0, ache);
        int idx = mp[points[i][1]];
        // cerr<<idx<<" "<<ache<<endl;
        bit.add(idx, 1);
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