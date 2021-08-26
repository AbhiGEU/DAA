#include <iostream>
using namespace std;
 
int main()
{
    int n,i,j,k,key;
    cin>>n;
    for(j=0;j<n;j++)
    {
        int num;
        cin>>num;
        int a[num];

        for(i=0;i<num;i++)
        {
            cin>>a[i];
        }

        cin>>key;
        k=0;
        
        for(i=0;i<num;i++)
        {
            if(a[i]==key)
            {
                i=0;
                k++;
                cout<<"Present"<<" "<<k<<endl;
                break;
            }
            k++;
        }
        if(i!=0)
        cout<<"Not Present"<<" "<<k<<endl;
    }
    
    
    return 0;
}
