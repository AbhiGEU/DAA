#include<iostream>
#include<math.h>
using namespace std;

int BS(int arr[], int l, int r, int key, int **k)
{
    while(l<=r)
    {
        (**k)++;
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
int ES(int arr[], int x, int n, int *k)
{
    (*k)++;
    if(arr[0] == x)
        return 0;
    
    int i =1;
    while(i<n && arr[i] <=x)
    {
        (*k)++;
        i = i*2;
    }
        
    return BS(arr, i/2, min(i, n-1), x, &k);
}

int main()
{
    int i,n,j,key,num,k;
    cin>>n;
    for(j=0;j<n;j++)
    {
        k=0;
        cin>>num;
        int a[num];
        for(i=0;i<num;i++)
        {
            cin>>a[i];
        }
        cin>>key;
        if(ES(a, key, num, &k)!=-1)
        cout<<"Present "<<k<<endl;
        else
        cout<<"Not Present "<<k<<endl;
    }

    return 0;
}