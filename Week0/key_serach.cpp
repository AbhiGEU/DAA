#include <iostream>
using namespace std;
 
int main()
{
    int n,i,key;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            i=0;
            cout<<"Key Found";
            break;
        }
    }
    if(i!=0)
    cout<<"Key not Found";
    
    return 0;
}
