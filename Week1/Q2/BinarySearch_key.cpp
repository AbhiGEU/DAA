#include<iostream>
using namespace std;

int BS(int arr[], int l, int r, int key, int *k)
{
    while(l<=r)
    {
        (*k)++;
        int m = l + (r-l)/2;

        if(arr[m]==key)
        return m;

        if(arr[m]<key)
        l = m+1;

        else
        r = m-1;

    }
    return -1;
}

int main()
{
    int n,i,j,k,num,key;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>num;
        int a[num];
        for(i=0;i<num;i++)
        {
            cin>>a[i];
        }
        k=0;
        cin>>key;

        if(BS(a, 0, num-1, key, &k)!=-1)
        cout<<"Present"<<" "<<k<<endl;

        else
        cout<<"Not Present"<<" "<<k<<endl;
    }

    return 0;
}