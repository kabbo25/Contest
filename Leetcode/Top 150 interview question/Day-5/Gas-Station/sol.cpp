#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int n = gas.size();
    vector another(2 * n, 0);
    for (int i(0); i < n; ++i) {
      another[i] = another[n + i] = (gas[i] - cost[i]);
    }
    for (int i(0); i < 2 * n; ++i) {
      cout << another[i] << " \n"[i == n - 1];
    }
    return -1;
  }
};
int main() {
  Solution obj;
  vector a{1, 2, 3, 4, 5};
  vector b{3, 4, 5, 1, 2};
  obj.canCompleteCircuit(a, b);
}
