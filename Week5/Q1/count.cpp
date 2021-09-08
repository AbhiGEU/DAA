#include <iostream>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        int n;
        cin >> n;
        int max=0,k=0;
        char str[n],ch;
        vector<int> fre(27,0);
        for(int i=0;i<n;i++)
        { 
            cin>>str[i];
        }
        for(int i=0;i<n;i++)
        {
            fre[str[i] - 'a']++;
            if(max < fre[str[i] - 'a'])
            {
                max=fre[str[i] - 'a'];
                ch=str[i];
            }
        }
        if(max==1)
        cout<<"No Duplicates Present"<<endl;
        else
        cout<<"max element is:"<<ch<<"-"<<max<<endl;

    }
    return 0;
}