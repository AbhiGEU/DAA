#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
vector<vector<int>> adj;
vector<int> col;
bool bipart;

void color(int u, int curr){
    if(col[u]!=-1 && col[u]!=curr){
        bipart =false;
        return;
    }
    col[u]=curr;
    if(vis[u])
        return;
    vis[u]=true;
    for(auto i: adj[u]){
        color(i, curr xor 1);
    }
}

int main()
{
    int n, c[20][20];
    cin>>n;
    bipart =true;
    adj = vector<vector<int>> (n);
    vis = vector<bool> (n,false);
    col = vector<int> (n,-1);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(c[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i]){
            color(i,0);
        }
    }
    if(bipart)
        cout<<"Yes Bipartite";
    else
        cout<<"Not Bipartite";
    
    return 0;
}