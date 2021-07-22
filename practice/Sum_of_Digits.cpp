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
        int sum = 0;
        while (a>0)
        {
            sum += a%10;
            a = a/10;
        }
        
        cout<<sum<<endl;
    }

    return 0;
}