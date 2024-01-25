#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i(0); i < n; ++i)
    cin >> a[i];
  if (n <= 5) {
    for (int i(0); i < n; ++i) {
      for (int j(i + 1); j < n; ++j) {
        for (int k(j + 1); k < n; ++k) {
          for (int l(k + 1); l < n; ++l) {
            if (a[i] + a[j] != a[k] + a[l]) {
              cout << "YES" << endl;
              return;
            }
          }
        }
      }
    }
    cout << "NO" << endl;
    return;
  }
  cout << (all_of(a.begin(), a.end(), [&](auto x) { return x == a[0]; })
               ? "NO"
               : "YES")
       << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int i(0); i < t; ++i)
    solve();
}
