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
    while (t--)
    {
        int a;
        cin>>a;
        if (a<10)
        {
            cout<<a<<endl;
        }
        else
        {
            int l, f;
            l = a%10;
            while(a>0)
            {
                f = a%10;
                a = a/10;
            }
            cout<<l+f<<endl;
        }
    }

    return 0;
}