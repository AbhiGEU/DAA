#include<iostream>
using namespace std;

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void merge(int A[], int mid, int low, int high)
{
    int cap = (high-low) + 1;
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,i,j;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
        mergeSort(a, 0, n-1);
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(i==n)
        cout<<"No"<<endl;
    }
    return 0;
}