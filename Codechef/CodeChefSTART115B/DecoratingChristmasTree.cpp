// time-limit: 1000
// problem-url: https://www.codechef.com/START115B/problems/CHRISDECOR
#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, x, y;
  cin >> n >> x >> y;
  int small = min(y / 3, x);
  n -= small, x -= small;
  n -= (x / 2);
  cout << (n <= 0 ? "YES" : "NO") << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  for (int i(0); i < t; ++i) {
    solve();
  }
}
