#include<bits/stdc++.h>
#include <numeric>
using namespace std;
void solve(){

   int n,k;
   cin>>n>>k;
   vector v(n,0);
   int64_t ans(1);
   for(auto& x:v){
    cin>>x;
    ans*=x;
}
    int64_t need=2023/ans;
    if(need*ans==2023){
        cout<<"yes"<<endl;
        for(int i(0);i+1<k;++i)
            cout<<1<<" ";
        cout<<need<<endl;
    }
    else cout<<"no"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
        }
        
    return 0;
}