// time-limit: 1000
// problem-url: https://www.codechef.com/START115B/problems/APLUSB
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
  vector a(n, 0), b(n, 0);
  for (int i(0); i < n; ++i)
    cin >> a[i];
  for (int i(0); i < n; ++i)
    cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.rbegin(), b.rend());
  int prev(-1);
  bool flag(true);
  for (int i(0); i < n; ++i) {
    if (prev == -1)
      prev = a[i] + b[i];
    else
      flag &= (a[i] + b[i] == prev);
  }
  if (flag) {
    for (auto &x : a)
      cout << x << ' ';
    cout << endl;
    for (int i(0); i < n; ++i) {
      cout << b[i] << " \n"[i == n - 1];
    }
  } else {
    cout << -1 << endl;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int i(0); i < t; ++i)
    solve();
}
