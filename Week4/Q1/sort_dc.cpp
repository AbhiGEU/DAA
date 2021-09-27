#include<bits/stdc++.h>
using namespace std;

int comp,inv;
void merge(int *a,int s,int m,int e){
    int i,j,k;
    int n1 = m-s+1;
    int n2 = e-m;
    int l[n1],r[n2];
    for(i=0;i<n1;i++)
        l[i]=a[s+i];
    for(j=0;j<n2;j++)
        r[j]=a[m+1+j];
    i=0;
    j=0;
    k=s;
    while(i<n1&&j<n2){
        comp++;
        if(l[i]<=r[j]){
            a[k]=l[i];
            i++;
        }
        else{
            inv++;
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=r[j];
        j++;
        k++;
    }
}
void merge_sort(int *a,int start,int end){
    if(start<end){
        int mid = (start+end)/2 ;
        merge_sort(a,start,mid);
        merge_sort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        comp=0,inv=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        merge_sort(a,0,n-1);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\nComparisons: "<<comp<<endl;
        cout<<"Inversions: "<<inv<<endl<<endl;
    }
    return 0;
}
