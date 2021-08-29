#include<iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void out(int arr[], int n, int *c, int *s)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<"\ncomparison = "<<*c;
    cout<<"\nswaps = "<<*s<<endl;

}

void sel(int arr[], int n)
{
    int i,j,c=0,s=0,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            
            c++;
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
            s++;
            swap(&arr[min], &arr[i]);
    }
    out(arr, n, &c, &s);
}

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,i;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        cin>>a[i];

        sel(a,n);
    }
}