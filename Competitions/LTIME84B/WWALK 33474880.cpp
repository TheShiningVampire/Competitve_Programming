#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll int n;
        cin>>n;
        ll int a[n] , b[n];
        for(ll int i = 0; i<n ; i++)
        {
            cin>>a[i];
        }
    
        for(ll int i = 0; i<n ; i++)
        {
            cin>>b[i];
        }

        ll int x = 0, y=0 ,ans =0;
        for(ll int i = 0; i< n ;i ++)
        {
            if(a[i] == b[i] && x==y)
            {
                ans +=a[i];
            }
            x+=a[i];
            y+=b[i];
        }

        cout<<ans<<endl;

    }

    return 0;
}
