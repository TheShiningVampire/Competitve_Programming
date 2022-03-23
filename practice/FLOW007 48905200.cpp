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
        int b= 0;
        cin>>a;
        while (a>0)
        {
            b = b*10 + a;
            a = a/10;
        }
        
        cout<<b<<endl;
        
    }

    return 0;
}
