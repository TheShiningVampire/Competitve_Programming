#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int c[1000];

    for(int i=0; i<1000 ; i++)
    {
        c[i] = 0;
    }

    for (int i = 0; i<t; i++)
    {
        int a;
        cin>>a;
        c[a] = c[a]+1;
    }

    for (int i = 0; i <1000;i++)
    {
        for (int j = 0; j <c[i] ; j++ )
        {
            cout<<i<<endl;
        }
    }

    return 0;
}

