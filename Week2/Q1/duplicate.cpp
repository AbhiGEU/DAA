#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int x, int n)
{
    int *low = lower_bound(arr, arr+n, x);

    if(low == (arr + n) || *low !=x)
    return 0;

    int *high = upper_bound(low, arr + n, x);

    return high - low;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int key;
        cin>>key;
        cout<<key<<"-"<<count(a, key, n)<<endl;

        
    }
    return 0;
}