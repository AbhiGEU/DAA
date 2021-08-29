#include<iostream>
using namespace std;

void inser(int arr[], int n)
{
    int i,key,j,s=0,c=0;
    for(i=1;i<n;i++)
    {
        s++;
        key = arr[i];
        j=i-1;

        while (j >= 0 && arr[j] > key)
        {
            if(arr[j] > key)
            {
                c++;
                s++;
            }
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<"\ncomparisons = "<<c<<endl;
    cout<<"shifts = "<<s<<endl;
    cout<<endl;
}


int main()
{
    int t,i,j;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        inser(a, n);
    }
    return 0;
}