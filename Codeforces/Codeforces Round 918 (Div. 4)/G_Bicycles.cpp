#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
const int64_t INF = 2e18;


int s[MAXN];
int dp[MAXN][MAXN],vis[MAXN][MAXN],w[MAXN][MAXN];
 int n, m;

int64_t dijkstra(int u,int p)
{
    //cerr<<u<<" "<<p<<" "<<cost<<endl;
   
    if(u==n){
        return 0;
    }
    if(dp[u][p]!=-1)return dp[u][p];
    int64_t ans=2e18;
    for(int i(1);i<=m;++i){
        if(i==p)continue;
        if(vis[u][i]){
           
            ans=min(ans,dijkstra(i,u)+w[u][i]*s[u]);
        }
    }
    return dp[u][p]=ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            s[i] = INF;
        }
        memset(dp,-1,sizeof dp);
        for (int i = 0; i < m; i++)
        {
            int u, v, ww;
            cin >> u >> v >> ww;
            w[u][v]=ww;
            w[v][u]=ww;
            vis[u][v]=1;
            vis[v][u]=1;
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> s[i];
        }
        cout<<dijkstra(1,0)<<endl;
        
    }
    return 0;
}