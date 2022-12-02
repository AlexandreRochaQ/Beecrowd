#include <bits/stdc++.h>
using namespace std; 
#define f first
#define s second
#define pi 3.14159
#define pb push_back
#define ll long long
#define ii pair<int,int>
#define p push
#define icN(a, b) for(int i=a; i<b; ++i)
#define idN(a, b) for(int i=a; i>=b; --i)
#define c(a) cin >> a; 
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL)

vector<vector<int>>g(100); 
bool vis[100]={false}; 

void dfs(int v)
{
    for(auto x : g[v])
    {
        if(!vis[x])
        {
            vis[x] = true; 
            dfs(x);
        }
    }
}
int main()
{
    int n, x, y; cin >> n; 
    while(n--)
    {
        cin >> x >> y; 
        g[x].push_back(y); 
        g[y].push_back(x);
    }
    cin >> n; 
    dfs(n); 
    for(int i = 0; i<100; ++i)
    {
        if(vis[i]==true)
        {
            cout << "é possível visitar: " << i << endl; 
        }
    }
}