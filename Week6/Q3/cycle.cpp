#include<bits/stdc++.h>
using namespace std;

bool iscycle(int src, vector<vector<int>> &adj, vector<bool> &vis, vector<int> &stack){
    stack[src] = true;
    if(!vis[src]){
        vis[src] = true;
        for(auto i : adj[src]){
            if(!vis[i] and iscycle(i, adj, vis, stack)){
                return true;
            }
            if(stack[i]){
                return true;
            }
        }
    }
stack[src] = false;
return false;
}

int main()
{
    int n,m,a[20][20];
    cin>>n;
    m=n;
    int cnt =0;
    vector<vector<int>> adj(n+1);
    vector<int> indeg(n+1);

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                adj[i].push_back(j);
            }
        }
    }
//for checking the adjcency list
    // for(int i=0;i<n;i++)
    // {
    //     cout<<i<<" :";
    //     for(auto j: adj[i]){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    bool cycle = false;
    vector<int> stack(n,0);
    vector<bool> vis(n, false);

    for(int i=0;i<n;i++)
    {
        if(!vis[i] and iscycle(i, adj, vis, stack))
        {
            cycle = true;
        }
    }
    if(cycle)
    cout<<"Cycle is present";
    else 
    cout<<"Cycle is not present";

return 0;
}