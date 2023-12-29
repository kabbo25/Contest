#include <bits/stdc++.h>
#include <numeric>
using namespace std;
void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    s+='a';
    set<char> st{'a', 'e'};
    int prev(-1), start(0);
    string ans;
    for (int i(0); i <=n; ++i)
    {
        if (st.count(s[i]))
        {
            if (prev == -1)
                prev = i;
            else
            {
                ans+= s.substr(start, i-start-1);
                ans+='.';
                start = i- 1;
                prev=i;
            }
        }
    }
    ans.pop_back();
    for(int i(start);i<n;++i){
        ans+=s[i];
    }
    cout <<ans<< endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}