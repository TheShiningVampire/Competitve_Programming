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
        int n, k , d;
        cin>>n>>k>>d;
        int sum = 0;
        while(n--)
        {
            int a;
            cin>>a;
            sum += a;
        }


        int ans = sum/k;
        ans = min(ans, d);

        cout<<ans<<endl; 
    }
    
    
    
    return 0;
}