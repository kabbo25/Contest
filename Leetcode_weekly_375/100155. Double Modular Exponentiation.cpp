#include<bits/stdc++.h>
using namespace std;
int pw(int a, int b, int m){
    int res(1);
    while(b){
        if(b&1){
            res = (1LL*res*a)%m;
        }
        a = (1LL*a*a)%m;
        b >>= 1;
    }
    return res;
}
class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        //((ai^bi % 10)^ci) % mi
        vector<int>res;
        int index(0);
        for(auto &v:variables){
            int a(v[0]), b(v[1]), c(v[2]), m(v[3]);
            int x = pw(a, b, 10);
            int y = pw(x, c, m);
            if(y == target){
                res.push_back(index);
            }
            index++;
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<vector<int>>v = {{2,3,3,10},{3,3,3,1},{6,1,1,4}};
    int target = 2;
    vector<int>res = s.getGoodIndices(v, target);
    for(auto &i:res){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}