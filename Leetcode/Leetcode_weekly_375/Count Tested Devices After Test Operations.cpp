#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int cnt(0);
        for(int i(0); i < batteryPercentages.size(); i++){
            if(batteryPercentages[i] == 0){
                continue;
            }
            cnt++;
            for(int j(i+1);j<(int)batteryPercentages.size();j++){
                if(batteryPercentages[j] == 0){
                    continue;
                }
                batteryPercentages[j]--;
            }
        }
        return cnt;
    }
};

int main(){
    Solution s;
    vector<int> v = {1,1,2,1,3};
    cout << s.countTestedDevices(v) << endl;
    return 0;
}