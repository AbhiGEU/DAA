#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, flag = 0, c;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        c = 0;
        while (c < n)
        {
            for (int j = 0; j < n; j++)
            {
                
                for (int k = 0; k < n; k++)
                {
                    if(j==k)
                    continue;

                    if (a[j] + a[k] == a[c])
                    {
                        cout << j <<","<< k <<","<< c << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                    break;
            }
            if (flag == 1)
                break;
            c++;
        }
        if(flag==0)
        cout<<"No Sequence Found"<<endl;
    }
    return 0;
}