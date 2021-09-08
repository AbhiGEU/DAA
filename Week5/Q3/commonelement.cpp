#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> out;
    int m,n,l=0,r=0;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
    cin>>a[i];

    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];

    while((l!=m) || (r!=n))
    {
        if(a[l] == b[r])
        {
            out.push_back(a[l]);
            l++;
            r++;
        }

        if(a[l] > b[r])
        r++;
        
        if(a[l] < b[r])
        l++;
    }

    for(auto i=out.begin();i!=out.end();i++)
    cout<<*i<<" ";

    cout<<endl;

    return 0;

}