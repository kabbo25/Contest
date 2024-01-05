// time-limit: 1000
// problem-url: https://www.codechef.com/START115B/problems/MAKE0
// #include<bits/stdc++.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
template <class Fun> class y_combinator_result {
  Fun fun_;

public:
  template <class T>
  explicit y_combinator_result(T &&fun) : fun_(std::forward<T>(fun)) {}

  template <class... Args> decltype(auto) operator()(Args &&...args) {
    return fun_(std::ref(*this), std::forward<Args>(args)...);
  }
};

template <class Fun> decltype(auto) y_combinator(Fun &&fun) {
  return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
}
void solve() {
  int n;
  cin >> n;
  vector v(n, 0);
  map<int, vector<int>> mp;
  for (int i(0); i < n; ++i) {
    cin >> v[i];
    mp[v[i]].emplace_back(i);
  }
  int operation(n), non_zero(n), ed(n - 1);
  for (int i(1); i < n; ++i) {
    auto it = upper_bound(mp[i].begin(), mp[i].end(), ed) - mp[i].begin();
    if (it == 0)
      continue;
    non_zero -= it;
    operation = min(operation, non_zero + i);
    ed = mp[i].front() - 1;
  }
  cout << operation << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int i(0); i < t; ++i)
    solve();
  return 0;
}
