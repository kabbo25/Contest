#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin >> s;
    stack<char> st;
    int cnt(0);
    for (auto &x : s)
    {
        if (!st.empty() and st.top() != x)
        {
            cnt++;
            st.pop();
        }
        else
        {
           st.emplace(x);
        }
    }
    cout<<n-cnt*2<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    solve();
}