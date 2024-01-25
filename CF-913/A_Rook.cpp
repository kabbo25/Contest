#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char ch;
    int num;
    cin >> ch >> num;
    vector<string> ans;
    for (int i = num - 1; i >= 1; i--)
    {
        string s = "";
        s += ch;
        s += to_string(i);
        ans.push_back(s);
    }
    for (int i = num + 1; i <= 8; i++)
    {
        string s = "";
        s += ch;
        s += to_string(i);
        ans.push_back(s);
    }
    for (int i = ch - 'a' - 1; i >= 0; i--)
    {
        string s = "";
        s += char(i + 'a');
        s += to_string(num);
        ans.push_back(s);
    }
    for (int i = ch - 'a' + 1; i < 8; i++)
    {
        string s = "";
        s += char(i + 'a');
        s += to_string(num);
        ans.push_back(s);
    }
    
    for (auto x : ans)
    {
        cout << x << endl;
    }
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
}