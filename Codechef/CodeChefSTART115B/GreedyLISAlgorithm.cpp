// time-limit: 1000
// problem-url: https://www.codechef.com/START115B/problems/GREEDYLIS
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
  int n, x;
  cin >> n >> x;
  if (x > n - 2 and x > 0) {
    cout << -1 << endl;
    return;
  }
  int ache = n - 2;
  vector v(n, n);
  for (int i(1); i < n; ++i)
    v[i] = i;
  for (int i(1); i < n; ++i) {
    if (ache == x)
      break;
    swap(v[i], v[i - 1]);
    ache--;
  }
  for (int i(0); i < n; ++i) {
    cout << v[i] << " \n"[i == n - 1];
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int i(0); i < t; ++i) {
    solve();
  }
  return 0;
}
