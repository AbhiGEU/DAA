#include<iostream>
#include<math.h>
using namespace std;

int JP(int arr[], int x, int n, int *k)
{
    (*k)++;
    int s = sqrt(n);
    int prev = 0;
    while(arr[min(s, n)-1] < x)
    {
        (*k)++;
        prev =s;
        s += sqrt(n);
        if(prev >=n)
        return -1;
    }

    while(arr[prev] < x)
    {
        (*k)++;
        prev++;
        if(prev == min(s, n))
        return -1;
    }

    if(arr[prev] == x)
        return prev;


    return -1;
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
        if(JP(a, key, num, &k)!=-1)
        cout<<"Present "<<k<<endl;
        else
        cout<<"Not Present "<<k<<endl;
    }

    return 0;
}