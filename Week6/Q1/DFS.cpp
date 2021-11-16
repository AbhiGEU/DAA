#include<bits/stdc++.h>
using namespace std;

vector<bool> vis;
vector<vector<int>> adj;

void dfs(int node)
{
    //preorder
    vis[node]=1;

    //  Inorder
    // cout<<node<<endl;
    for(auto x: adj[node])
    {
        if(!vis[x])
        {
            dfs(x);
        }
    }

    //Postorder
    cout<<node<<endl;
}

int main()
{
    int n,m,c[20][20],a,b;
    cin>>n;
    m=n;
    
    adj = vector<vector<int>>(n+1);
    vis = vector<bool>(n+1,false);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(c[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i); // Remove this for directed graph
            }
        }
        
    }

    dfs(1);

    cin>>a>>b;
    if(vis[a]==1 && vis[b]==1)
        cout<<"Yes Path Exist";
    else
        cout<<"No Such Path Exist";
    return 0;
}