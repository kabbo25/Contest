// time-limit: 1000
// problem-url: https://www.codechef.com/START115B/problems/SUBSEQI
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
 
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.first << ", " << p.second << ')';
}
template <typename T_container, typename T = typename enable_if<
                                    !is_same<T_container, string>::value,
                                    typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
  os << '{';
  string sep;
  for (const T &x : v)
    os << sep << x, sep = ", ";
  return os << '}';
}
 
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#ifdef NEAL_DEBUG
#define dbg(...)                                                               \
  cerr << '[' << __FILE__ << ':' << __LINE__ << "] (" << #__VA_ARGS__ << "):", \
      dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
void rec(int pos,string s){
    if(pos==2){
        if(s.back()!='d' and s.front()!='d')
        cout<<s<<endl;
        return;
    }
    for(int i(0);i<4;++i){
        auto ch=char('a'+i);
        if(ch==s.back())continue;
        rec(pos+1,s+=ch);
        s.pop_back();
    }
}
void solve()
{
    string s;
    rec(0,s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
