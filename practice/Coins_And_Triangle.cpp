#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans = (sqrt(8*n + 1) - 1)/2;
        cout<<ans<<endl;

    }

    return 0;
}