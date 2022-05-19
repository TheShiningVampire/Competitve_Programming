#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> comp(1000001,0);
    comp[0] = 1;
    comp[1] = 1;
    
    for(int i = 2; i< 1000; i++)
    {
        if (comp[i] == 0)
        {
            for(int j = 2*i; j<1000001; j+=i)
            {
                comp[j] = 1;
            }
        }
    }


    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if (comp[n] == 0)
        {
            cout<<"yes"<<endl;
        }  
        else
        {
            cout<<"no"<<endl;
        }

    }


    return 0;
}
