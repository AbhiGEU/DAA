#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }

        int key;
        cin>>key;

        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(abs(a[j]-a[k]) == key)
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}