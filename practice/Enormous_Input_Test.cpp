#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , k;
    int ans = 0;
    cin>>n>>k;
    while(n--)
    {
        int t;
        cin>>t;
        if (t%k == 0)
        {
            ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}